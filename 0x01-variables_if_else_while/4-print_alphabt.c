#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 *
 */

int main(void)
{
	char alph[] = "abcdfghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 25; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
