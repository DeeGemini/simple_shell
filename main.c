#include "main.h"


/**
 * main - Entry point for the custom shell program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on successful execution.
 */
int main(int argc, char **argv)
{
	if (argc != 1)
	{
		fprintf(stderr, "Usage: %s\n", argv[0]);
		return (1);
	}

	if (initializeShell(void) != 0)
	{
		fprintf(stderr, "Shell initialization failed\n");
		return (1);
	}

	if (runShell(void) != 0)
	{
		fprintf(stderr, "Shell execution failed\n");
		return (1);
	}

	cleanupShell(void);
	return (0);
}
