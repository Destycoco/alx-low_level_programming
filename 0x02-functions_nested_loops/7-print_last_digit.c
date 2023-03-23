#include "main.h"
/**
 * print_last_digit -  a function that prints the last digit of a no.
 *
 * @n: character to be checked
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	 int ld;
	 ld = n % 10;
	 if (n < 0)
		 ld = -ld;
	 else
		 ld = ld;
	 _putchar(ld + '0');
return (ld);
}
