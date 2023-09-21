#include "main.h"
/**
  * find_path - this finds the path in which an executable is in
  * @command: this is the executable
  * Return: returns the path if successful,
  * returns the command if the command passed is the path
  * returns NULL if it fails
  */

char *find_path(char *command)
{
	char *path, *temp, *path_copy, *token;
	int i, count = 0;
	struct stat st;

	if (stat(command, &st) == 0)
		return (command);

	path = getenv("PATH");
	if (strcmp(path, "") == 0 || path == NULL)
		return (command);

	path_copy = strdup(path);
	token = strtok(path_copy, ":");
	while (token != NULL)
	{
		temp = malloc(strlen(command) + strlen(token) + 2);
		strcpy(temp, token);
		strcat(temp, "/");
		strcat(temp, command);

		if (stat(temp, &st) == 0)
		{
			free(path_copy);
			return (temp);
		}

		free(temp);
		token = strtok(NULL, ":");
		count++;
	}

	free(path_copy);
	return (command);
}

