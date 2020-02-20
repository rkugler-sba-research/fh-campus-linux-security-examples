
#include <stdio.h>

char name[255];

int main(int argc, char* argv[])
{
    printf("Please tell me your name: ");
    scanf ("%79s", name);
    printf("Your name is %s.\n", name);
    puts("bye! exiting.");
    return 0;
}
