#include <stdio.h>

/**
 * main - to print the size of data types
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu\n", sizeof(a));
	printf("size of an int: %lu\n", sizeof(b));
	printf("size of a long int: %lu\n", sizeof(c));
	printf("size of a long long int: %lu\n", sizeof(d));
	printf("size of a float: %lu\n", sizeof(e));
	return (0);
}
