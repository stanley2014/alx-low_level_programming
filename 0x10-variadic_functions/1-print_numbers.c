#include <stdarg>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * @n: number of strings passed to the function
 * @seperator: is the string to be printed between numbers
 * print_numbers - funvtion that prints numbers
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
