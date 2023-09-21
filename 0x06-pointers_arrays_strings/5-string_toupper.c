#include "main.h"
/**
 *string_toupper - chenges all lowercase letters of a string to uppercas.
 *@s: input string
 *@Return: to s
 */
char *string_toupper(char *str)
{
	int index = 0;
	int desp = 32;

	for (index =  0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - desp;
		}
	}
	return (str);
}
