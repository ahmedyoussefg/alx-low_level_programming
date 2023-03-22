#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				if (i != j && k != i)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (i != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
					else
					{
						putchar('\n');
					}
				}
			}
		}
	}
	return (0);
}
