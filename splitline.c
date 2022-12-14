#include "shell_systems.h"

/**
 * split_line - used to split strings
 * @line: to show which line needs to be affected
 *
 * Return: tokens
 */


char **split_line(char *line)
{
	char **tokens = malloc(buffsize * sizeof(char *));
	const char *del = " \t\n";
	char *token;

		if (!tokens)
			{
			fprintf(stderr, "%sdash: Allocation error%s\n", "RED", "RESET");
			exit(EXIT_FAILURE);
			}
			token = strtok(line, del);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;


	if (!tokens)
		{
		fprintf(stderr, "%sdash: Allocation error%s\n", "RED", "RESET");
		exit(EXIT_FAILURE);
		}
	}

	token = strtok(NULL, del);
	}

	tokens[position] = NULL;

return (tokens);
}
