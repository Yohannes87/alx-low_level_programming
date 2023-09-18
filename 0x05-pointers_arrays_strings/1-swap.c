#include "main.h"
/**
 * swap_int - function the value of two integers
 * @a: input
 * @b: input
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
