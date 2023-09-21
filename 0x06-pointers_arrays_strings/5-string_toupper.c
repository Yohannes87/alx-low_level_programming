#include "main.h"
/**
 *string_toupper - chenges all lowercase letters of a string to uppercas.
 *@str: input string
 *@Return: to str
 */
char *string_toupper(char *str)
{
	int index = 0;

	for (index =  0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
	}
	return (str);
}
