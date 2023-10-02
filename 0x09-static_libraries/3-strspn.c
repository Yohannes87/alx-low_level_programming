#include "main.h"
/**
 *_strspn - function that gets the length of a prefix substring
 *@s: the input data
 *@accept: conssist only byte
 *Return: number of bytes in the inintial segement of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, i = 0;
	unsigned int a = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				a++;
		j++;
	}
	i++;
	j = 0;
	}
	return (a);
}
