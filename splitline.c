#include "shell_systems.h"


char * * split_line(char * line) {
	int buffsize = 1024, position = 0;
	char * * tokens = malloc(buffsize * sizeof(char * ));
	char * token;

	      	if (!tokens) {
			fprintf(stderr, "%sdash: Allocation error%s\n", RED, RESET);
			exit(EXIT_FAILURE);
			}
			token = strtok(line, TOK_DELIM);
	while (token != NULL) {
		tokens[position] = token;
		position++;

	if (position >= buffsize) {
		buffsize += TK_BUFF_SIZE;
		tokens = realloc(tokens, buffsize * sizeof(char * ));

	if (!tokens) {
		fprintf(stderr, "%sdash: Allocation error%s\n", RED, RESET);
		exit(EXIT_FAILURE);
		}
	}

	token = strtok(NULL, TOK_DELIM);
	}

	tokens[position] = NULL;

return tokens;
}
