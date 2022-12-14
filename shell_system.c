#include "shell_systems.h"

#define TOK_DELIM " \t\r\n"
#define RED "\033[0;31m"
#define RESET "\e[0m"

char *read_line();
char **split_line(char *);
int dash_exit(char **);
int dash_execute(char **);

/**
 * dash_execute - executes a command
 * @args: array of arguments
 */

int dash_execute(char **args) {

	pid_t cpid;
/**will take arguments if any*/
	if (strcmp(args[0], "exit") == 0) {
		return dash_exit(args);
	}

	cpid = fork();

	if (cpid == 0) {
/**execute arugements*/		if (execvp(args[0], args) < 0)
	printf("dash: command not found: %s\n", args[0]);
	exit(EXIT_FAILURE);
/**if command cant execute then error*/
	} else if (cpid < 0)/**checking if the process ID is less than 0 */
	printf("Error forking\n");
	else {/**waitpid will be called with three parameters*/
			waitpid(cpid, & status, WUNTRACED);
	}
	return 1;
}

/**
 * exitt - exits the shell with or without a return of status n
 * @args: array of words of the entered line
 */

int dash_exit(char **args) {

	int i, n;
/**The code starts by checking if the first argument is a number*/
	if (args[1])
	{/**Then the code loops through all of the arguments in args and frees them up*/
		n = atoi(args[1]);
		if (n <= -1)
			n = 2;
		free(args);
		exit(n);
	}/**The code will free all the memory allocated by the call to malloc in a loop*/
	for (i = 0; args[i]; i++)
		free(args[i]);
	free(args);
	exit(0);
	return 0;
}


/**
 * splitstring - splits a string and makes it an array of pointers to words
 * @str: the string to be split
 * @delim: the delimiter
 * Return: array of pointers to words
 */

char **splitstring(char *str, const char *delim)
{
	int i, wn;
	char **array;
	char *token;
	char *copy;
/**splits a string into an array of strings*/
	copy = malloc(_strlen(str) + 1);
	if (copy == NULL)/**allocates memory for the copy and stores it in the variable*/
	{
		perror(_getenv("_"));
		return (NULL);
	}/**copies all of the characters from str to copy*/
	i = 0;
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}/**token is set equal to strtok*/
	copy[i] = '\0';
	token = strtok(copy, delim);
	array = malloc((sizeof(char *) * 2));
	array[0] = _strdup(token);

	i = 1;
	wn = 3;
	while (token)
	{
		token = strtok(NULL, delim);
		array = _realloc(array, (sizeof(char *) * (wn - 1)), (sizeof(char *) * wn));/**will return NULL if there are no more tokens left in copy*/
		array[i] = _strdup(token);
		i++;
		wn++;
	}
	free(copy);
	return (array);
}

char *read_line() {
	int buffsize = 1024;
	int position = 0;
	char *buffer = malloc(sizeof(char) * buffsize);
	int c;

	if (!buffer) {
		fprintf(stderr, "%sdash: Allocation error%s\n", RED, RESET);
		exit(EXIT_FAILURE);
	}
/**ierattes until there are no more characters in the input stream or EOF is encountered*/
	while (1) {
		c = getchar();/**all bytes after that point will be set to '\0'*/
		if (c == EOF || c == '\n') {
			buffer[position] = '\0';
			return buffer;
		} else {
			buffer[position] = c;
		}/**assigns byte until position reaches buffsize max length*/
		position++;

		if (position >= buffsize) {
			buffsize += 1024;
			buffer = realloc(buffer, buffsize);

			if (!buffer) {
				fprintf(stderr, "dash: Allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}

void loop() {
	char *line;
	char **args;
	int status = 1;
/**splits up each word on that new line into individual characters and returns them*/
	do {
	printf("> ");
	line = read_line();
	args = split_line(line);
	status = dash_execute(args);
	free(line);
	free(args);
	} while (status);
}
int main() {
	loop();
	return 0;
}
