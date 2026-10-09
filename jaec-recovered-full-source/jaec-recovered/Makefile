CC ?= cc
CFLAGS ?= -O2
JAEC_FLAGS = -std=c11 -fPIC -Wall -Wextra -ffp-contract=off
SOURCES = src/frontend.c src/tde.c src/linear_aec.c src/activation_compat.c src/model_loader.c \
          src/vendor/monocypher/monocypher.c src/vendor/pffft/pffft.c \
          src/vendor/pffft/pffft_common.c
HEADERS = $(wildcard src/*.h src/vendor/monocypher/*.h src/vendor/pffft/*.h \
                    src/vendor/pffft/simd/*.h)

.PHONY: all check sanitize
all: build/libjaec_recovered.so build/libjaec_scalar.so build/libjaec_loader.so

build:
	mkdir -p build

build/libjaec_recovered.so: $(SOURCES) $(HEADERS) src/exports.map Makefile | build
	$(CC) $(CFLAGS) $(JAEC_FLAGS) -DJAEC_X86_APPROX=1 -shared \
	  -Wl,-z,defs,--version-script=src/exports.map $(SOURCES) -o $@ -lm

# Disable adaptive TDE skipping to compare to the binary's scalar dispatch.
build/libjaec_scalar.so: $(SOURCES) $(HEADERS) src/exports.map Makefile | build
	$(CC) $(CFLAGS) $(JAEC_FLAGS) -DJAEC_TDE_SKIP=0 -shared \
	  -Wl,-z,defs,--version-script=src/exports.map $(SOURCES) -o $@ -lm

build/libjaec_loader.so: src/model_loader.c src/model_loader.h \
                        src/model_constants.h src/vendor/monocypher/monocypher.c | build
	$(CC) $(CFLAGS) $(JAEC_FLAGS) -shared src/model_loader.c \
	  src/vendor/monocypher/monocypher.c -o $@

check: all
	python3 tests/check_loader.py
	python3 tests/check_modules.py
	python3 tests/check_recovered.py
	python3 tests/check_recovered.py --scalar

build/sanitize_streaming: $(SOURCES) $(HEADERS) tests/sanitize_streaming.c Makefile | build
	$(CC) -O1 -g $(JAEC_FLAGS) -DJAEC_X86_APPROX=1 \
	  -fsanitize=address,undefined -fno-omit-frame-pointer \
	  tests/sanitize_streaming.c $(SOURCES) -o $@ -lm

sanitize: build/sanitize_streaming
	ASAN_OPTIONS=detect_leaks=1:halt_on_error=1 UBSAN_OPTIONS=halt_on_error=1 \
	  build/sanitize_streaming original/tde_lp.bin
