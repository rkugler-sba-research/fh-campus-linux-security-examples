
# Exercise strace
In this example we (s)trace a program to find out what syscalls it is issuing to the Kernel.

Compile the questions.c file
```
gcc questions.c -o questions
```
Run strace to see the syscalls.
```
strace ./questions
```

# Exercise syscall
In the example the program issues a write system call (man 2 write). The function signature of is the following:
```
ssize_t write(int fd, const void *buf, size_t nbytes);
```
To call this syscall, place the system call number (write=1) in rax, then its arguments, in order, in rdi, rsi, rdx, r10, r8, and r9. Then invoke syscall:
```
section .data
   hellotxt db 'this is the syscall\n' ; some text

_start:
    mov	rax, 1		; system call number (sys_exit)
    mov rdi, 2		; stdout
    mov rsi, hellotxt   ; text buffer buffer
    mov rdx, 19
    syscall		; call kernel
```

You can assemble and link the program with nasm and ld (or the provided Makefile):
```
nasm -f elf64 hello.asm
ld -s -o hello hello.o
```
Debug the program with strace.

# Questions/Tasks
- Assemble and link the program and run it
- Why does the segmentation fault occur?
- Add code that exits the program gracefully

# Bonus
- Run the program in gdb, set a breakpoint on read and inspect the registers before syscall

