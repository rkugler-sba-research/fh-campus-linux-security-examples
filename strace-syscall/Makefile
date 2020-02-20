.PHONY: all clean

all: questions hello

questions: questions.c
	gcc -o questions questions.c

hello: hello.asm
	nasm -f elf64 hello.asm
	ld -s -o hello hello.o

clean:
	rm hello questions
