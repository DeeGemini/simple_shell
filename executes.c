#include "main.h"
/**
  * execute - Executes command in child process
  * @args: Array of characters
  * Return: 1 on success
  * prints out error to stderr if there's failure at any point
  */

int execute(char **args)
{
	pid_t mypid;
	int status;

	if (args[0] == NULL)
	{
		return (1);
	}

	mypid = fork();
	if (mypid == -1)
	{
		perror(args[0]);
		return (1);
	}

	if (mypid == 0)
	{
		char *command = "/bin/";

		strcat(command, args[0]);
		execv(command, args);
		perror(args[0]);
		return (0);
	}
	else
	{
		wait(&status);
	}

	return (-1);
}

