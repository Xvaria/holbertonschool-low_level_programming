#ifndef dog_h
#define dog_h
/**
 * struct dog - Define a new type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#include <stdio.h>
#include <stdlib.h>

/* 1-init_dog.c */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* 2-print_dog.c */
void print_dog(struct dog *d);

/* 4-new_dog.c */
dog_t *new_dog(char *name, float age, char *owner);

/* 5-free_dog.c */
void free_dog(dog_t *d);

#endif
