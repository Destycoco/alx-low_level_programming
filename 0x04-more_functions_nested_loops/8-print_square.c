#include "main.h"
/**
 * print_square - prints a square of size size
 * @size: size of the square
 */
void print_square(int size)
{
int i, j;

for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
