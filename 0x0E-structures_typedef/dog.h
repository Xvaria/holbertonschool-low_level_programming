#ifndef dog_h
#define dog_h
/**
 * struct dog - Define a new type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#include <stdio.h>

/* 1-init_dog.c */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* 2-print_dog.c */
void print_dog(struct dog *d);

#endif
