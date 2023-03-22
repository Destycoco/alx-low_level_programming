#include "main.h"
/**
 * _isalpha - A program that checks for alphabet
 *
 * @c: - The character that is being checked.
 * Return: 1 if it is a letter otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


