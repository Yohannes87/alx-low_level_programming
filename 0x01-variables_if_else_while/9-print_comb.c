#include <stdio.h>
/**
 *main - point of Entry
 *Describtion: print lowor case alphabet exclude unwanted
 *Return: always 0
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
