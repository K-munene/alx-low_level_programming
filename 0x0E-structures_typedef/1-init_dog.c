#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - new dog struct that the variable to be initialized
 *
 * @d: pointer to the struct of new dog
 * @name: name of new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
