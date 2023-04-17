#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - main
 * @d: long param
 * struct dog -  main entry
 * @name: the naming
 * @age: age param
 * @owner: the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
d->name = name;
d->age = age;
d->owner = owner;
}
