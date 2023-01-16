#include "dog.h"
/**
 * init_dog - to initialize members of struct dog
 * @d: pointer to struct dog
 * @name: pointer to first membr name
 * @age: Second Member age
 * @owner: pointer to Third Member owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
