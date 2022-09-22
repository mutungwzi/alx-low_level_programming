#include "main.h"

/**
 *  print_square - prints a square
 *  @size: the size of the square
 *  Return: Always 1
 */

void print_square(int size)
{
int a, b;

if (size > 0)
{
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
