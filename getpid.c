#include "shell_systems.h"

/**
 * main - PID
 *@ac:the number of items in av
 *@av:a NULL terminated array of strings
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
pid_t my_pid;

my_pid = getpid();
printf("%u\n", my_pid);
return (0);

(void) ac;
(void) av;
}
