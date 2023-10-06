#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_calloc - function that allocates memory for an array
 *@size: size of arry
 *@nmemb: number of elements in arry
 *Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(ptr) + i) = 0;
	}

	return (ptr);
}
