#include "dog.h"

/**
 * init_dog - Initializes a existing structure
 * @d: Pointer to the structure
 * @name: The name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Description: Longer description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d == NULL)
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
