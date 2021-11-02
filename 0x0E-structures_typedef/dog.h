#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure de dog
 * @name: nam du chiens
 * @age: age du chien
 * @owner: prorpriétaire du chiens
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;



/*prototypes de l'exercices*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /* DOG_H */
