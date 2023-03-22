#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (i != j)
			{
				putchar(i + 48);
				putchar(j + 48);
				if (i != 8 || j != 9)
				{
					putchar(',');
				}
				putchar(' ');
				if (i == 8 && j == 9)
				{
					putchar('\n');
				}
			}
		}
	}
	return (0);
}
