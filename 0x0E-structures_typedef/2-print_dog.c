#include "dog.h"

/**
 * print_dog - prints out the fields of a struct dog
 * @d: this is a pointer the struct dog variable
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nill)");
		if (d->age)
			printf("Age: %.7f\n", d->age);
		else
			printf("Age: (nil)");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
