int dash_execute(char * * args) {
	pid_t cpid;
	int status;
	      
	if (strcmp(args[0], "exit") == 0)
	{
		return dash_exit();
	}
	cpid = fork();

	if (cpid == 0) {
	if (execvp(args[0], args) < 0)
		printf("dash: command not found: %s\n", args[0]);
		exit(EXIT_FAILURE);

	} else if (cpid < 0)
		printf(RED "Error forking"
		RESET "\n");
	else {
		waitpid(cpid, & status, WUNTRACED);
	}
	return 1;
}
