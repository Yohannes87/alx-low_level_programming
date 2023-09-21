#include "main.h"
/**
 *_strncat - concatentes two string
 *@dest: destination file
 *@src: source file
 *@n: input number
 *Return: return to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (j < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
