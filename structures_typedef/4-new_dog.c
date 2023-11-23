#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog.
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: new_doggo
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *temp_name;
	char *temp_owner;
	dog_t *new_doggo;

	temp_name = malloc(sizeof(*name) * (strlen(name) + 1));
	temp_owner = malloc(sizeof(*owner) * (strlen(owner) + 1));
	new_doggo = malloc(sizeof(dog_t));

	if (temp_name && temp_owner && new_doggo)
	{
		strcpy(temp_name, name);
		strcpy(temp_owner, owner);
		new_doggo->name = temp_name;
		new_doggo->age = age;
		new_doggo->owner = temp_owner;
	}
	else
	{
		free(temp_name);
		free(temp_owner);
		free(new_doggo);
		return (NULL);
	}

	return (new_doggo);
}
