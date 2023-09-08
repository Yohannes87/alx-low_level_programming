#include <stdio.h>
/**
 *main - point of entry
 *descrption: print lower case alphabet
 *Return: Always 0
 */
int main()
{
	int n = 97;
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}


