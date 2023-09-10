#include <stdio.h>
/**
 * Main - Entery point
 * Description: combnation of three number
 * Returtn: Always 0
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
	for (b = a+1; b <= 57; b++)
	{
	for (c = b+1; c <= 57; c++)
	{
	if ((b != a) != c)
	{
		putchar(a);
putchar(b);
putchar(c);
if (a == 55 && b == 56)
continue;
putchar(',');
putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

