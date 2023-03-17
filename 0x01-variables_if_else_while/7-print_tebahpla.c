#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 *
 */

int main(void)
{
	int i = 122;

	for (; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
