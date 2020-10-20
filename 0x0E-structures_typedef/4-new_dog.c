#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: Django
 * @age: 3.5
 * @owner: Bob
 * Return: 0 or nd
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	int a = 0;

	if (name == 0 || owner == 0)
		return (0);
	nd = malloc(sizeof(dog_t));
	if (!nd)
		return (0);
	while (name[a])
		a++;
	nd->name = malloc(sizeof(char) * (a + 1));
	if (!nd->name)
	{
		free(nd);
		return (0);
	}
	a = 0;
	while (owner[a])
		a++;
	nd->owner = malloc(sizeof(char) * (a + 1));
	if (!nd->owner)
	{
		free(nd->name);
		free(nd);
		return (0);
	}
	for (a = 0; name[a]; a++)
		nd->name[a] = name[a];
	nd->name[a] = 0;
	for (a = 0; owner[a]; a++)
		nd->owner[a] = owner[a];
	nd->owner[a] = 0;
	nd->age = age;
	return (nd);
}
