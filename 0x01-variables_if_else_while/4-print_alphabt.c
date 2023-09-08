#include <stdio.h>
/**
 *Main - point of Entery
 *Descrption: print alphabet and exclude unwant one.
 *return alwaye
 */
int main(void)
{
	int n = 97;

	while (n == 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
