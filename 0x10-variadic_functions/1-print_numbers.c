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

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;

	va_list sp;


	va_start(sp, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(sp, int));

		if (i != n-1 && seperator != NULL)
		{
			printf("%s", seperator);
		}
	}

	va_end(sp);

	printf("\n");
}
