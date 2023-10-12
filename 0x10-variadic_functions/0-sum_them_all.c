#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - functions that returns the sum
 *@n: the number of variable that passed throw functiom
 *@...: the variable parameter to calculate the sum of 0
 *Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
