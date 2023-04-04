#include "main.h"

/**
 * _strpbrk - A function that Searches a string for any of a set of bytes.
 * @s: The string that is to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - A pointer to the matched byte.
 * If no set is matched then it returns NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
