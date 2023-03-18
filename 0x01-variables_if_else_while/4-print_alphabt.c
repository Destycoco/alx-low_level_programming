#include <stdio.h>
/**
 * main - A program that Print all the letters except q and e
 *
 * Return: 0
*/
int main(void)
{
	char c;
	char x;
	char y;

	c = 'a';
	x = 'e';
	y = 'q';
	while (c <= 'z')
	{
		if ((c != x && c != y) && c <= 'z')
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
