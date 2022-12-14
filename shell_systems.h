#ifndef SHELL_SYSTEM
#define SHELL_SYSTEM
#define TOK_DELIM " \t\r\n"
#define RED "\033[0;31m"
#define RESET "\e[0m"

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<readline/readline.h>
#include<readline/history.h>


extern char **environ;


<<<<<<< HEAD
void loop(void);/** prompt for command input from user*/
int mainf(int ac, char *av[]);/** to get ppid*/
void printDir(void);
=======
char rline(void);
void loop(void);
int main(int ac, char *av[]);
>>>>>>> ab3fb9729fbf7e2eec19e5cf6ba448cef6a2e4b9
char **splitstring(char *str, const char *delim);
char *read_line();
int main(void);
#endif
