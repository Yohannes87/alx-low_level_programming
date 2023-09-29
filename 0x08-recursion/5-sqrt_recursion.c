#include "main.h"
/**
 *sqrt_a - return the nutral square root of a number
 *@a: squire root of b
 *@b: rooot of a
 *Return: sqruare root or -1
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 *_sqrt_recursion - returns the natral the square root of a number
 *@n: input number
 *Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
