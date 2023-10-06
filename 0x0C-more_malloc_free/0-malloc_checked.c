#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - functions that allocates memory using malloc
 *@b: input unsign
 *Return: 98 or prt
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
