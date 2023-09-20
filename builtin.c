#include "main.h"

/**
 * hsh_env - Prints all the environment variables.
 * @args: Array of words (unused).
 * Return: Always returns 0.
 */
int hsh_env(char **args __attribute__((unused)))
{
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}

/**
 * _cd - Changes directory.
 * @args: Array of words containing the directory path.
 * Return: Always returns 0.
 */
int _cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "cd: missing argument\n");
	}

	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("cd");
		}
	}
	return (0);
}

/**
 * hsh_exit - Exits the shell.
 * @args: Array of words (unused).
 * Return: Always returns 0.
 */
int hsh_exit(char **args __attribute__((unused)))
{
	exit(0);
}
