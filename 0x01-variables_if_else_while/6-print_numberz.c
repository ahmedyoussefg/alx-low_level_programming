#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 *
 */

int main(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
