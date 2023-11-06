#include "dog.h"

/**
 * init_dog - this fuctions initializes all the the fields of
 * a struct dog with the passed parameters
 * @d: this is a pointer to the struct dog
 * @name: this is the name to initialize the name field with
 * @age: the age to assign the age field
 * @owner: this is the owner to be assigned to the owner field
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d && name && age && owner)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
