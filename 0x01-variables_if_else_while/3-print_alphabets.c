#include <stdio.h>
/**
 *main - point of Entry
 *Describtion: print lowor case alphabet and then foolw uppercase
 *Return: always 0
 */
int main (void)
{
	int n = 97;
	int m =65;
	
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
