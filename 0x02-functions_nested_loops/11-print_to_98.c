#include "main.h"

/**
 * print_to_98 - print n to 98 counts
 * separated be comma, followed
 * by space and number shouls be printed in orders
 *
 * @n: input
 */

void print_to_98(int n)
{
int count;

if (n > 98)
for (count = n; count > 98; --count)
printf("%d, ", count);
else
for (count = n; count < 98; ++count)
printf("%d, ", count);
printf("98\n");
}
