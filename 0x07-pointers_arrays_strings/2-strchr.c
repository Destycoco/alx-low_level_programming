#include "main.h"

/**
 * _strchr - function that Locates a character in a string.
 * @s: string to be searched.
 * @c: character to be located.
 *
 * Return: a pointer to the first occurence if c is found.
 * If c is not found - return Null
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
