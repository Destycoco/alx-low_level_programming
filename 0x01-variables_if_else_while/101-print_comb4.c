#include <stdio.h>
/**
 * main - a program that prints 3 digits
 *
 * Return: 0 (success)
*/
int main(void)
{
int i;
int j;
int k;

for (i = 0; i < 10; i++)
{
for (j = 1; j < 10; j++)
{
for (k = 2; k < 10; k++)
{
if (i < j && j < k && i < k && i != j && j != k && i != k)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
{
if (i + j + k != 24)
putchar(',');
putchar(' ');
}
}
}
}
}
putchar ('\n');
return (0);
}
