#ifndef SHELL_SYSTEM
#define SHELL_SYSTEM

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<readline/readline.h>
#include<readline/history.h>


extern char **environ;


char rline(void);
void loop(void);
int main(int ac, char *av[]);
char **splitstring(char *str, const char *delim);
char *read_line();
int main(void);
#endif
