#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always (0)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= 'f'; c++)
	{
	if (c <= '9' || (c >= 'a' && c <= 'f'))
	{
	putchar(c);
	}
	}
	putchar('\n');

	return (0);
}
