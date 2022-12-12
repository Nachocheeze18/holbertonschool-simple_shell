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
