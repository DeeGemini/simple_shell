#include "main.h"

/**
 * check_command - Function that checks the command.
 * @args: This is the input by the user.
 * Return: -1 if failure, 0 on success.
 */
int check_command(char **args)
{
	if (args == NULL || args[0] == NULL)
		return (-1);

	if (_strcmp(args[0], "env") == 0)
	{
		return (hsh_env(args));
	}

	else if (_strcmp(args[0], "exit") == 0)
	{
		return (hsh_exit(args));
	}

	else if (_strcmp(args[0], "cd") == 0)
	{
		return (_cd(args));
	}

	return (execute(args));
}
