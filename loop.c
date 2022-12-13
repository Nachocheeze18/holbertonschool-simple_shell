#include "shell_systems.h"


void loop(void) {
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
