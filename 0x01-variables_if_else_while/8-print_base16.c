#include <stdio.h>
/**
 * main - A program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
*/
int main(void)
{
int c;

for (c = '0'; c <= '9'; c++)
putchar(c);
for (c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}
