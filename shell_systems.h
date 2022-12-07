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

char rline();
void loop();
int main(int argc, char **argv[]);
int main(int ac, char *av[]);
void printDir(void);
#endif
