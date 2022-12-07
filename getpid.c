#include "shell_system.h"

/**
 * main - PID
 *
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
