#include "main.h"
/**
 * _puts - prints a string
 * @*str: inputs
 * Retrun: Always 0
 */

void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

