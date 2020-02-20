
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFERSIZE 255

void command_help(char* text)
{
    printf("help:\n");
    printf("\trun <program>\n");
    printf("\n");
}

void command_run(char* text)
{
    int i = 0;
    char command[255];
    for(i=4;i<(strlen(text)-1);i++)
        command[i-4] = text[i];
    command[i-4] = '\0';
    puts(command);
}

void parse_command(char* text)
{
    if(strncmp(text, "help", 4) == 0)
    {
	command_help(text);
    }
    if(strncmp(text, "run ", 4) == 0)
    {
	command_run(text);
    }
}

int main() {
  char text[BUFFERSIZE];
  printf("rsh> ");
  while( fgets(text, BUFFERSIZE , stdin) ) /* break with ^D or ^Z */
  {
    if( !text ) 
        continue;

    parse_command(text);

    //strcat( text, buffer ); /* note a '\n' is appended here everytime */
    //printf("%s\n", buffer);
    printf("rsh> ");
  }
  return 0;
}
