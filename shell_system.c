#include "shell_system.h"

char *readline();
char **split




char *read_line()
{
	int buffsize = 1024;
	int position = 0;
	char *buffer = malloc(sizeof(char) * buffsize);
	int c;
	
	if (!buffer)
	{
		printf(stderr, "%sdash: allocation error%s\n", RED, RESET);
		exit(exit_failure);
	}

	while (1)
	{
		c = getline();
		if (c == EOF || c == '\n')
		{
			buffer[position] = '\0';
			return buffer;
		}

		else
		{
			buffer[position] = c;
		}
		position++;

		if (position >= buffsize) 
		{
			buffsize += 1024;
			buffer = realloc(buffer, buffsize);

			if (!buffer)
			{
				printf(sstderr, "dash: Allocation error\n");
				exit(EXIT_FAILURE);
			}


/***
 * main - reads commands
 *@rline: command to read
 *@status: return value
 *
 */

void loop(void)
{
        char *rline;
        int status = 1;

        do
        {
                printf("%s, \n");
                rline = read-line();
                free(line);
        }
                while (status);
}

int main()
{
	loop();
	return 0;
}
