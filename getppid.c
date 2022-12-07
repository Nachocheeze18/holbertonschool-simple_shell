#include "shell_systems.h"

/**
 * main - PPID
 *@ac:the number of items in av
 *@av:a NULL terminated array of strings
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
pid_t my_ppid;

my_ppid = getppid();
printf("%u\n", my_ppid);
return (0);

(void) ac;
(void) av;
}
