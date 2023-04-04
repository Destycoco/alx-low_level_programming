#include "main.h"

/**
 * _strstr - Function that Locates a substring.
 * @haystack:string to be searched.
 * @needle: The substring which is to be located.
 *
 * Return: a pointer to the beginning if the substring is 
 * located of the located substring.
 * then return NULL If the substring is not located.
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
