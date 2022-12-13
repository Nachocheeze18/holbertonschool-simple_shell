#include "shell_systems.h"

/**
 * main - making a loop that waits for the user to type a command
 * and always makes a new line.
 *
 *
 *
 */
void loop() {
   char * line;
   char * * args;
   int status = 1;

   do {
      printf("> ");
      line = read_line();
      flag = 0;
      args = split_lines(line);
      status = dash_launch(args);
      free(line);
      free(args);
   } while (status);
}


/**
 * _getenv - gets the value of the global variable
 * @name: name of the global variable
 * Return: string of value
 */
char *_getenv(const char *name)
{
	int i, j;
	char *value;

	if (!name)
		return (NULL);
	for (i = 0; environ[i]; i++)
	{
		j = 0;
		if (name[j] == environ[i][j])
		{
			while (name[j])
			{
				if (name[j] != environ[i][j])
					break;

				j++;
			}
			if (name[j] == '\0')
			{
				value = (environ[i] + j + 1);
				return (value);
			}
		}
	}
	return (0);
}

