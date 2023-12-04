#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @n: number of strings passed to the function
 * @seperator: is the string to be printed between numbers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
<<<<<<< HEAD
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
=======
		printf("%d", va_arg(sp, int));

		if (i != n - 1 && seperator != NULL)
			printf("%s", seperator);
>>>>>>> 420acac2d990598adedf3411e4eb11edfe60da55
	}

	va_end(list);

	printf("\n");
}
