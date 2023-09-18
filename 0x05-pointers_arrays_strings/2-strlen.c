#include "main.h"
/**
 * _strlen - functions that returns the length of a string
 * @s: input
 * Return: longi
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\n'; i++);

	return (i);
}
