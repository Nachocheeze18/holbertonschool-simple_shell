#include "shell_system.h"

/**
 * main - PPID
 *
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
