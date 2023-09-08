#include <stdio.h>
/**
 *main - point of Entry
 *Describtion: print lowor case alphabet exclude unwanted
 *Return: always 0
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
