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
	
	printf("size of a char: %zu byte(s)\n", sizeof(charSize));
	printf("size of an int: %zu byte(s)\n", sizeof(intSize));
	printf("size of a long int: %zu byte(s)\n", sizeof(longIntSize));
	printf("size of a long long int: %zu byte(s)\n", sizeof(longLongIntSize));
	printf("size of a float: %zu byte(s)\n", sizeof(floatSize));

	return (0);
}
