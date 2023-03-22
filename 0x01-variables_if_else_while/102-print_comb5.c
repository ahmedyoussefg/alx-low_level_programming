#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i = 0, j = 0, k = 0, l = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10 && k > i; k++)
			{
				for (l = 0; l < 10 && l > j; l++)
				{
					printf("%d%d %d%d, ", i, j, k, l);
				}
			}
		}
	}
	return (0);
}
