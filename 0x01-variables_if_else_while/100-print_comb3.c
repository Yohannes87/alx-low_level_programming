#include <stdio.h>
/**
 * main - Entry point
 * Descroption: Combination of number
 * Return: Always 0
 */
int main(void)
{
	int d;
	int p;

	for (d = 48; d <= 56; d++)
	{
		for (p = 49; p <=57; p++)
		{
			if (p > d)
			{
				putchar(d);
				putchar(p);
				if (d != 56 || p !=57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
