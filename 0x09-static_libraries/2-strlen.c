#include "main.h"
/**
 * _strlen - functions that returns the length of a string
 * @s: input
 * Return: longi
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != ('\0'); i++)
		count++;
	return (count);
}
