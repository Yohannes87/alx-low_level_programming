#include "main.h"
#include <stdlib.h>
/**
 *create_array - functions that creates an array of chars
 *@size: the size of the memory that print
 *@c: char to assign
 *Return: to str
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (str == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
