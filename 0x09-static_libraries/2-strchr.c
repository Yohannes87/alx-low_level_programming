#include "main.h"
/**
 *_strchr - function that locates a character in a string
 *@s: input string
 *@c: input string
 *Return: retrun to c or s
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
