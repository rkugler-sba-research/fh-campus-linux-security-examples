
compile the program.
```
make
```

Now test it. The program prints the command name. 
```
# ./link
./link #
```

Use ltrace to check, which library functions are called.
```
$ ltrace ./link
printf("./link")                                                    = 6
./link+++ exited (status 0) +++
```

Create a link that exploits the printf function.
```
# ln -sf link \%x. 
# ls -la
%x. -> link
```
Now run the symlink.
```
# ./%x. 
./28868d38.
```

What kind of vulnerability has been triggered?
