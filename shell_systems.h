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


void loop(void);/** prompt for command input from user*/
int mainf(int ac, char *av[]);/** to get ppid*/
void printDir(void);
char **splitstring(char *str, const char *delim);
char *read_line();
int mainy(void);
#endif
