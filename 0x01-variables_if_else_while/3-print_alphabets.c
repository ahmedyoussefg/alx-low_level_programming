#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 *
 */

int main(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	char alph_c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(alph_c[i]);
	}
	putchar('\n');
	return (0);
}
