#include "main.h"
#include <sys/wait.h>
#define MAX_COM_LENGTH 100
#define DELIM " \t\r\n\a"
/**
 * tokenise - A function that breaks into tokens
 * @line: String to break into tokens
 * Return: 0
 */
char **tokenise(char *line)
{
    int bufsize = MAX_COM_LENGTH;
    int position = 0;
    char **tokens = malloc(bufsize * sizeof(char *));
    char *token;

    if (!tokens)
    {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }

    for (token = strtok(line, DELIM); token; token = strtok(NULL, DELIM))
    {
        tokens[position++] = token;

        if (position >= bufsize)
        {
            bufsize += MAX_COM_LENGTH;
            tokens = realloc(tokens, bufsize * sizeof(char *));
            if (!tokens)
            {
                perror("Failed to allocate memory");
                exit(EXIT_FAILURE);
            }
        }
    }
    tokens[position] = NULL;
    return (tokens);
}

