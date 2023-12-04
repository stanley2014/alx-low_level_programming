#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returms the sum of all its
 * parameters
 * @n: argument passed to the function
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	va_list sp;

	int sum = 0;


	va_start(sp, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(sp, int);
	}

	va_end(sp);

	return sum;
}
