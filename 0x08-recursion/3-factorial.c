#include "main.h"
/**
 *factorial - find the factorial of agiven num
 *@n: input number
 *Return: -1 and factorialof n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
