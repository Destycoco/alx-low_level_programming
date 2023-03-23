#include "main.h"
/**
 * print_to_98 - a function that prints to 98
 * @n: character to be observed
 * @i: charcter
 * Return: always 0
 */
void print_to_98(int n)
{
int i;

if (n > 0 && n <= 98)
{
for (i = n; i <= 98; i++)
{
_putchar(i);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
else if (n <= 0)
{
for (i = n; i <= 98; i++)
{
_putchar(n);
_putchar(',');
_putchar(' ');
}
_putchar ('\n');
}
else if (n > 98)
{
for (i = n; n > 98; i--)
{
_putchar(n);
_putchar(',');
_putchar(' ');
}
_putchar ('\n');
}
else if (n == 98)
{
_putchar(n);
_putchar(',');
_putchar(' ');
}
}
