#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 *
 */

int main(void)
{
	int i = 48;

	for (; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	}
	return (0);
}
