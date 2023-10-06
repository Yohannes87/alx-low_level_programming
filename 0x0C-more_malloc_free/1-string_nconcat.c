#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *_strlen - calculate and retun string length
 *@s: string
 *Return: strinhg length or i
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
		return (i);
}
/**
 *string_nconcat - comncatente two string
 *@s1: string 1
 *@s2: string 2
 *@n: n bytes to contact string
 *Return: pointer to concatente
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);
	len = _strlen(s1) + num + 1;


	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}


