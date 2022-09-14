#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * descriptio: Printing "_putchar"
 *Return: Always 0 (success)
 */

int main(void)
{
char n[9] = "_putchar";
int i = 0;

for (i = 0; i < 8; i++)
{
putchar(n[i]);
}

putchar('\n');

return (0);
}
