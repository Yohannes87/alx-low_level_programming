#include <stdio.h>
/**
 * main - Entry point
 * Descroption: Combination of number
 * Return: Always 0
 */
int main(void)
{
	int d, p;

	for (d = '0'; d <= '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
	{
		if (p != d)
		{
			putchar(d);
			putchar(p);
			if (p != '9')
			putchar(',');
			putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
