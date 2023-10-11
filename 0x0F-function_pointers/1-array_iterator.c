#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - print each element of an arrray
 *@array: arrey
 *@size: how many element to print
 *@action: pointer to the functions you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
