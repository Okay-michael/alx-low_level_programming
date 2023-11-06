#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - contains some attributes of a dog
  * @name: specifies the name of the dog
  * @age: tell the age of the dog
  * @owner: this field says the pet owner
  */
struct dog
{
	char *name;
	float age;
	char *owneer;
};

/**
  * dog_t - using typedef with struct dog.
  */
typedef struct dog dog_t;

void print_dog(struct dog *d);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);

#endif
