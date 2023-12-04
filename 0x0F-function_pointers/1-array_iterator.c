#include <stdio.h>
#include <stdlib.h>
#include "function_pointers"

/**
 * array_iterator - this executes a function given as a parameter on
 * each element of an array.
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to the function used
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
