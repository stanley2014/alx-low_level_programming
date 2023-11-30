#include <stdio.h>
#include <stdlib.h>
#include "function_pointers"

/**
 * @size: size of the array
 * @action: pointer to the function used
 * array_iterator - this executes a function given as a parameter on each
 * element of an array.
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		for (i = 0, i < size; i++)
			action(array[i]);
	}
}
