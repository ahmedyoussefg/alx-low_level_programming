#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Alwaays (Success)
 */

int main(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (; i < 26; i++)
	{
		printf("%c", alph[i]);
	}
	return (0);
}
