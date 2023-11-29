#include <stdlib.h>
#include "dog.h"

/**
 * free dog - frees the memory allocated for dog_t
 * @name - name of dog
 * @owner- owner of dog
 * d - pointer to dog_t
 */
void free_dog(dog_t *d)
{
	if(d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
