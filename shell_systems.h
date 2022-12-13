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

char rline(void);
void loop(void);
int main(int ac, char *av[]);
void printDir(void);
char *read_line();
char **split_line(char *);
int dash_exit(char **);
int dash_execute(char **);
int dash_execute(char **args);
int main();
char * * split_line(char * line);
#endif
