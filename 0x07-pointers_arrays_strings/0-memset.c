#include "main.h"
/**
 *_memset - function that fills memory a constant byte.
 *@s: input file
 *@b: memory area pointed
 *@n: constsats
 *Return: return to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
