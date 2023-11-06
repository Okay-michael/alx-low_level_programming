#include "dog.h"

/**
 * print_dog - prints out the fields of a struct dog
 * @d: this is a pointer the struct dog variable
 * @Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nill)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
