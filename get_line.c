#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * read_line - Function that uses getline to read input
 * Return: line read
 */

char *read_line(void)
{
	char *line = NULL;
	size_t bufsize = BUFFER_SIZE;

	if (isatty(STDIN_FILENO) == 1)
	{
		write(STDOUT_FILENO, "$ ", 2);
	}

	line = malloc(sizeof(char) * bufsize);
	if (line == NULL)
	{
		perror("malloc error");
		exit(EXIT_FAILURE);
	}

	if (scanf(" %[^\n]", line) == 0)
	{
		free(line);
		return (NULL);
	}

	return (line);
}

