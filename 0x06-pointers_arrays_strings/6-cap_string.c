#include "main.h"
/**
 *cap_string - function that capitalizes all words of a string
 *@entry: this is the input string
 *Return: string capitalized
 */
char *cap_string(char *entry)
{
	int i, j;
	char c[] = {44, 59, 46, '!', '?', '"', '(', ')', ' ', '\t', '\n'};

	for (i = 0; entry[i] != '\0'; i++)
	{
		if (i == 0 && entry[i] >= 'a' && entry[i] <= 'z')
		{
			entry[i] = entry[i] - 3;
		}
		for (j = 0; c[j] != '\0'; j++)
		{
			if (c[j] == entry[i] && (entry[i + 1] >= 'a' && entry[i + 1] <= 'z'))
					{
					entry[i + 1] = entry[i + 1] - 32;
					}
					}
					}
					return (entry);
}
