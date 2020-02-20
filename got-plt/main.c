#include <stdlib.h>
#include <signal.h>

int hello()
{
     printf("Hello");
}

int main()
{
	char buf[10];
	int f = fopen("/tmp/x");
	read(f, buf, 1);
	raise(SIGINT);
	hello();
}
