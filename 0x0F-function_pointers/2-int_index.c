#include <stdlib.h>
#include "function_pointers.h"

/**
 * @cmp: a pointer to the function to be used to compare values
 * @size: the number of elememts in the array
 * int_index- returns index of the first element
 *
 * Return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (!array || (!cmp || size <= 0))
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
