#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints elements of a struct dog
 *
 * Return: 0 
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name %s\n", d -> name != NULL ? d -> name : "(nil)");
		printf("Age: %.6f\n", d -> age);
		printf("Owner: %s\n", d -> owner != NULL ? d -> owner : "(nil)");
	}
}
