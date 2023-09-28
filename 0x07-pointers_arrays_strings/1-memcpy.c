#include "main.h"
/**
 *_memcpy - functions that copies memory area
 *@dest: destinction of function
 *@src: source of function
 *@n: variable of the function
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
