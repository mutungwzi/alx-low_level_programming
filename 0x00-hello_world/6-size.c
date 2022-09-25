#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char charSize;
	int intSize;
	long int longIntSize;
	long long int longLongIntSize;
	float floatSize;

	printf("size of a char: %d byte(s)\n", sizeof(charSize));
	printf("size of an int: %d byte(s)\n", sizeof(intSize));
	printf("size of a long int: %d byte(s)\n", sizeof(longIntSize));
	printf("size of a long long int: %d byte(s)\n", sizeof(longLongIntSize));
	printf("size of a float: %d byte(s)\n", sizeof(floatSize));

	return (0);
}
