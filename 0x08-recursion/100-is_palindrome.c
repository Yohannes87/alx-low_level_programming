#include "main.h"
/**
 *is_palindrome - a string is palindrome
 *@s: input string
 *return; 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 *_strlen_recursion - chek the string is simmilar
 *@s: input string
 *return: 0 or 1
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 *check_pal - checher function
 *@s: poiter string
 *@i: input
 *@len: out puetr
 *return: 0 or 1
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
