#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function to strusct
 * @name: pointer to struct variable
 * @age: for dog age
 * @owner: for owner pointer
 * @d: for malloc
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
