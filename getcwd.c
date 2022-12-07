#include "shell_systems.h"

/**
 * printDir - print current directory
 *
 * Return:
 */
void printDir(void)
{
char cwd[1024];
	getcwd(cwd, sizeof(cwd));

	printf("\nDir: %s", cwd);
}
