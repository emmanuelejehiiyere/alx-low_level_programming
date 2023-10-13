#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calc the sum
 * Return: If n == 0 - 0. Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int count, sum = 0;

	va_start(a, n);

	for (count = 0; count < n; count++)
		sum = sum + va_arg(a, int);

	va_end(a);

	return (sum);
}
