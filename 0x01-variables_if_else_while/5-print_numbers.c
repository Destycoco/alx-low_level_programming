#include <stdio.h>
/**
 * main - a program that prints all single digit numbers of base 10
 *
 * Return: 0
*/
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
