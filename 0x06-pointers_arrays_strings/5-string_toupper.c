#include "main.h"
/**
 *string_toupper - chenges all lowercase letters of a string to uppercas.
 *@s: input string
 *@Return: to s
 */
char *string_toupper(char *s)
{
	int index = 0;
	int desp = 'a' - 'A';

	for (index =  0; s[index] != '\0'; index++)
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] = s[index] - desp;
		}
	}
	return (s);
}
