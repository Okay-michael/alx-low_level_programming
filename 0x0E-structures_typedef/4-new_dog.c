#include "dog.h"

/**
 * _strdup - creates copy of the given string
 * @str: this is the string passed
 * Return: this function returns a pointer the new string
 * otherwise it returns NULL if it fails
 */
char *_strdup(char *str)
{
	char *dupl;
	size_t size = 0;

	if (str != NULL)
	{
		while(str[size++])
			;

		dupl = malloc(sizeof(char) * size);
		if (dupl != NULL)
		{
			while (size--)
				dupl[size] = str[size];
			return (dupl);
		}
	}
	return (NULL);
}

/**
 * new_dog - this function creates a new dog
 * @name: this field is the new dog's name
 * @age: this field is the new dog's age
 * @owner: this field is the new dog's owner
 * Return: this function returns a pointer to the new dog, or
 * NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dpter;

	dpter = malloc(sizeof(dog_t));
	if (!dpter)
		return (NULL);

	if (name)
	{
		dpter->name = _strdup(name);
		if (!(dpter->name))
		{
			free(dpter);
			return (NULL);
		}
	}
	else
		dpter->name = NULL;

	dpter->age = age;

	if (owner)
	{
		dpter->owner = _strdup(owner);
		if (!(dpter->owner))
		{
			free(dpter->name);
			free(dpter);
			return (NULL);
		}
	}
	else
		dpter->owner = NULL;

	return (dpter);
}
