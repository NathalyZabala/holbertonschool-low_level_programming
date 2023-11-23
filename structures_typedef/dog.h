#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - dog atributes
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: The attributes of a dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
