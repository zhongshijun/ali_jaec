// Export decompiler output and call graph for the loaded JAEC program.
// @category JAEC
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;
import com.google.gson.*;
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.app.cmd.function.ApplyFunctionSignatureCmd;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;

public class ExportJAEC extends GhidraScript {
    private void signature(String name, DataType ret,
                           DataType[] types, String[] names) throws Exception {
        FunctionIterator iter = currentProgram.getFunctionManager().getFunctions(true);
        while (iter.hasNext()) {
            Function f = iter.next();
            if (!f.getName().equals(name)) continue;
            FunctionDefinitionDataType def = new FunctionDefinitionDataType(name);
            def.setReturnType(ret);
            ParameterDefinition[] params = new ParameterDefinition[types.length];
            for (int i=0; i<types.length; i++)
                params[i] = new ParameterDefinitionImpl(names[i], types[i], null);
            def.setArguments(params);
            new ApplyFunctionSignatureCmd(f.getEntryPoint(), def,
                SourceType.USER_DEFINED).applyTo(currentProgram, monitor);
        }
    }

    public void run() throws Exception {
        Path root = Paths.get(getScriptArgs()[0]);
        Files.createDirectories(root.resolve("functions"));
        DataType vp = new PointerDataType(VoidDataType.dataType);
        DataType cp = new PointerDataType(CharDataType.dataType);
        DataType sp = new PointerDataType(ShortDataType.dataType);
        signature("jaec_frontend_create", vp,
            new DataType[]{cp}, new String[]{"model_path"});
        signature("jaec_frontend_destroy", VoidDataType.dataType,
            new DataType[]{vp}, new String[]{"state"});
        signature("jaec_frontend_reset", VoidDataType.dataType,
            new DataType[]{vp}, new String[]{"state"});
        signature("jaec_frontend_last_error", cp,
            new DataType[]{}, new String[]{});
        signature("jaec_frontend_process", IntegerDataType.dataType,
            new DataType[]{vp,sp,sp,IntegerDataType.dataType,sp},
            new String[]{"state","mic","ref","sample_count","output"});
        DecompInterface decompiler = new DecompInterface();
        decompiler.setOptions(new DecompileOptions());
        decompiler.openProgram(currentProgram);
        JsonArray functions = new JsonArray();
        StringBuilder combined = new StringBuilder(
            "/* Ghidra decompiler output. Analysis artifact; not yet buildable C. */\n");
        FunctionIterator iter = currentProgram.getFunctionManager().getFunctions(true);
        while (iter.hasNext() && !monitor.isCancelled()) {
            Function f = iter.next();
            if (f.isExternal()) continue;
            DecompileResults result = decompiler.decompileFunction(f, 120, monitor);
            JsonObject item = new JsonObject();
            item.addProperty("name", f.getName());
            item.addProperty("address", f.getEntryPoint().toString());
            item.addProperty("body_bytes", f.getBody().getNumAddresses());
            item.addProperty("signature", f.getSignature().toString());
            item.addProperty("success", result.decompileCompleted());
            JsonArray calls = new JsonArray();
            for (Function called : f.getCalledFunctions(monitor)) {
                JsonObject c = new JsonObject();
                c.addProperty("name", called.getName());
                c.addProperty("address", called.getEntryPoint().toString());
                calls.add(c);
            }
            item.add("calls", calls);
            functions.add(item);
            String code = result.decompileCompleted()
                ? result.getDecompiledFunction().getC()
                : "/* DECOMPILE ERROR: " + result.getErrorMessage() + " */";
            String heading = "\n/* " + f.getEntryPoint() + " " + f.getName() + " */\n";
            combined.append(heading).append(code).append("\n");
            String safe = f.getName().replaceAll("[^A-Za-z0-9_]", "_");
            Files.writeString(root.resolve("functions").resolve(
                f.getEntryPoint()+"_"+safe+".c"), heading+code,
                StandardCharsets.UTF_8);
        }
        Files.writeString(root.resolve("decompiled.c"), combined.toString());
        Files.writeString(root.resolve("functions.json"),
            new GsonBuilder().setPrettyPrinting().create().toJson(functions));
        decompiler.dispose();
        println("Exported " + functions.size() + " functions to " + root);
    }
}
