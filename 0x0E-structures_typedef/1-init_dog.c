#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: direction my_dog
 * @name: Django
 * @age: 3.5
 * @owner: Bob
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
