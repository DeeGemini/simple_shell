#include "main.h"

/**
  * _strlen - Checks the length of a string
  * @s: string parameter
  * Return: it returns the length of the string
  */
int _strlen(const char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
/**
  * _strcpy - Copies content of length of src to dest
  * @src: source string to be copied
  * @dest: destination string
  * the content of src will be copied into
  * Return: it returns a pointer to the destination string
  */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}
/**
  * _strcat - Appends content of src to dest
  * @src: string to be copied from
  * @dest: String to be appended
  * Return: this returns a pointer to the concatenated string
  */
char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}
/**
  * _strcmp - This compares two strings
  * @s1: this is one of the string to be compared
  * @s2: thus is another one of the string to be compared
  * Return: returns 0 if both strings are the same
  * returns a positive value if s1 is greater than s2
  * returns a negative value if s1 is less than s2
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
/**
 * _strdup - Duplicates a string
 * @s: this is the string that will be copied
 * Return: this returns a pointer to the newly allocated string
 * OR NULL if there's insufficient space
 */
char *_strdup(char *s)
{
	int len = _strlen(s);
	char *copy = malloc(sizeof(char) * (len + 1));
	char *copy_start = copy;

	if (copy == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		*copy = *s;
		copy++;
		s++;
	}

	*copy = '\0';

	return (copy_start);
}

