#include "main.h"
/**
 *_strlen_recursion - functions that returns the length of a string
 *@s: number of string
 *Return: zero
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
