#include "main.h"
/**
 *_strcmp - Compares two string
 *@s1: first input string
 *@s2: second input string
 *Return: return two 0 or *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
