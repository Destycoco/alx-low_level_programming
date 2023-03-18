#include <stdio.h>
/**
 * main - A program prints that prints to upper and then lower case
 *
 * Return: 0
*/
int main(void)
{
	char c;
	char D;

	c = 'a';
	D = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (D <= 'Z')
	{
		putchar(D);
		D++;
	}
	putchar('\n');
	return (0);
}
