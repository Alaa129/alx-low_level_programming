#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always (0)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + 48);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	digit++;
	}
	putchar('\n');

	return (0);
}
