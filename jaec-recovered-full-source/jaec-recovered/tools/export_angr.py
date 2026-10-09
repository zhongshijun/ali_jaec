"""Export C-like decompilation and a function index using angr."""
import argparse
import json
import logging
import re
import signal
import time
from pathlib import Path

import angr
from angr.sim_type import parse_signature

ROOT = Path(__file__).resolve().parents[1]


def timeout_handler(*_):
    raise TimeoutError("per-function decompilation time budget exceeded")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--output", type=Path, default=ROOT / "analysis/angr")
    parser.add_argument("--timeout", type=int, default=90)
    args = parser.parse_args()
    logging.getLogger("angr").setLevel(logging.ERROR)
    logging.getLogger("cle").setLevel(logging.ERROR)
    args.output.mkdir(parents=True, exist_ok=True)
    (args.output / "functions").mkdir(exist_ok=True)
    project = angr.Project(str(ROOT / "original/jaec_x86.so"),
                           auto_load_libs=False)
    base = project.loader.main_object.mapped_base
    frames = (ROOT / "analysis/unwind-frames.txt").read_text()
    starts = sorted({
        base + int(m, 16)
        for m in re.findall(r"FDE.*?pc=([0-9a-f]+)\.\.", frames)
    })
    print("angr", angr.__version__, "base", hex(base),
          "unwind function starts", len(starts), flush=True)
    cfg = project.analyses.CFGFast(
        normalize=True, data_references=True, function_starts=starts
    )
    print("CFG functions", len(cfg.kb.functions), flush=True)
    signatures = {
        0x2860: "void *jaec_frontend_create(char *model_path)",
        0x2820: "void jaec_frontend_destroy(void *state)",
        0x2800: "char *jaec_frontend_last_error()",
        0x2a60: "void jaec_frontend_reset(void *state)",
        0x2b40: "int jaec_frontend_process(void *state, short *mic, "
                "short *ref, int sample_count, short *output)",
        0x4db0: "void *jaec_model_load(char *path)",
        0x5170: "void jaec_model_free(void *model)",
    }
    for rva, declaration in signatures.items():
        f = cfg.kb.functions.get(base + rva)
        if f:
            f.prototype = parse_signature(declaration, arch=project.arch)
            f.calling_convention = project.factory.cc()
    preferred = [0x2b40, 0x3330, 0x3190, 0x32b0, 0x51b0, 0x52c0,
                 0x54a0, 0x54b0, 0x72d0, 0x8410, 0x8420,
                 0x4280, 0x4420, 0x4ad0, 0x4b60, 0x2860, 0x2a60]
    functions = [
        f for f in cfg.kb.functions.values()
        if base + 0x1300 <= f.addr < base + 0x19c00
        and not f.is_plt and not f.is_simprocedure
    ]
    functions.sort(key=lambda f: (
        preferred.index(f.addr - base) if f.addr - base in preferred else 999,
        f.addr,
    ))
    signal.signal(signal.SIGALRM, timeout_handler)
    records = []
    for index, f in enumerate(functions):
        rva = f.addr - base
        item = {"rva": hex(rva), "name": f.name, "size": f.size}
        started = time.monotonic()
        try:
            signal.alarm(args.timeout)
            result = project.analyses.Decompiler(f, cfg=cfg.model)
            if not result.codegen:
                raise RuntimeError("decompiler returned no code generator")
            code = result.codegen.text
            item["success"] = True
            item["lines"] = len(code.splitlines())
            (args.output / "functions" / f"{rva:05x}.c").write_text(
                f"/* Original RVA {rva:#x}; angr analysis artifact. */\n" + code
            )
        except Exception as error:
            item["success"] = False
            item["error"] = f"{type(error).__name__}: {error}"
        finally:
            signal.alarm(0)
        item["seconds"] = round(time.monotonic() - started, 2)
        records.append(item)
        (args.output / "functions.json").write_text(
            json.dumps(records, indent=2) + "\n"
        )
        print(f"{index+1}/{len(functions)} {rva:#x} {f.name}: "
              f"{item.get('lines', item.get('error'))} "
              f"({item['seconds']}s)", flush=True)
    texts = [
        p.read_text()
        for p in sorted((args.output / "functions").glob("*.c"))
    ]
    (args.output / "decompiled.c").write_text(
        "/* Analysis artifact: not yet buildable C. */\n\n"
        + "\n\n".join(texts)
    )


if __name__ == "__main__":
    main()
