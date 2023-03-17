#include <stdio.h>
/**
 * main - A program that prints the size of various data types
 *
 * Return: 0
*/

int main(void)
{
	char c;
	int i;
	long int l;
	long long int g;
	float f;

	printf("Size of a char: " % lu "byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int: " % lu "byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: " % lu "byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: " % lu "byte(s)\n", (unsigned long)sizeof(g));
	printf("Size of a float: " % lu "byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
