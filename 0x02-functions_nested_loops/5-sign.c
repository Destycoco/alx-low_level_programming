#include "main.h"
/**
 * print_sign - A function that prints the sign of a number.
 *
 * @n: The character to be checked
 *
 * Return: 1 if > 0 and 0 if 0 and -1 if < 0
 */
int print_sign(int n)
{
if (n > 0)
_putchar('+');
return (1);
if (n == 0)
_putchar('0');
return (0);
if
(n != 0 && n < 0)
_putchar('-');
return ("-1");
}