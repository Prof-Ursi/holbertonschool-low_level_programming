#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - let a dog out
 *
 * @d: pointer to structure
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
