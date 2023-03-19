#include <stdio.h>
/**
 * main -  a program that prints all single digit numbers of base 10
 *
 * Return: 0
*/
int main(void)
{
	int c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

