.PHONY: all

target: target.c
	gcc -o target target.c

lib.so: lib.c
	gcc -shared -fPIC -o lib.so lib.c

all: target
