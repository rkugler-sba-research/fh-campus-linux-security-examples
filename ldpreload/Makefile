.PHONY: all


lib.so: lib.c
	gcc -shared -fPIC -o lib.so lib.c

target: target.c
	gcc -o target target.c

all: target
