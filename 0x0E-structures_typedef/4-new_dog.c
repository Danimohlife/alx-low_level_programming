#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - struct funct
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->owner = owner;
	ptr->age = age;

	return (ptr);
}
