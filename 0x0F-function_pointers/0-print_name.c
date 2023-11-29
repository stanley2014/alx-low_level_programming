#include <stdio.h>
#include <stdlib.h>
#include "function_pointers"

/**
 * @print_name - prints a name as it is
 * @name: name of the person
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f == name)
		f(name);

	return 0:
}
