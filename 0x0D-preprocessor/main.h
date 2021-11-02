#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
int _putchar(char c);
void errors(void);
 #endif /* MAIN_H */