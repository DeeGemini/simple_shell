#ifndef _MAIN_H_
#define _MAIN_H_

#include <sys/wait.h>
#include <sys/stat.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char **tokenise(char *line);
char *getenv(const char *getenv);
void loop(void);
char *read_line(void);
int _strcmp(char *s1, char *s2);
char *_strdup(char *s);
char *_strtok(char *str, const char *delim);
extern char **environ;
int hsh_env(char **args);
int hsh_exit(char **args);
int check_command(char **args);
int _strlen(const char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int execute(char **args);
char *find_path(char *command);
int _cd(char **args);

#endif
