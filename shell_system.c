#include "shell_systems.h"

char *readline();
char **split

char *split_line(char *line)
{
	int buffsize = 1024, position = 0;
	char *tokens = malloc(buffsize * sizeof(char *));
	char *token;

	if (!tokens)
	{
		fprintf(stderr, "%sdash: Allocation error%s\n", RED, RESET);
		exit(EXIT_FAILURE);
	}

	token = strtok(line, TOK_DELIM);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;

		if (position >= buffsize)
		{

			buffsize += TK_BUFF_SIZE;
			tokens = realloc(tokens, buffsize * sizeof(char *));
			if (!tokens)
			{
				fprintf(stderr, "%sdash: Allocation error%s\n", RED, RESET);
				exit(EXIT_FAILURE);
			}
		}

		token = strtok(NULL, TOK_DELIM);
	}

	tokens[position] = NULL;

	return (tokens);
}


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
			return (buffer);
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
				printf(stderr, "dash: Allocation error\n");
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

	do {
		printf("%s, \n");
		rline = read_line();
		free(rline);
		} while (status);
}

int main(void)
{
	loop();
	return (0);
}
