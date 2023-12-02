#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index- returns index of the first element
 * @cmp: a pointer to the comparing function
 * @size: the number of elememts in the array
 * @array: array to search in
 *
 * Return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]) != 0)
		{
			return (n);
		}
	}

	return (-1);
}
