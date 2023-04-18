#include <stdlib.h>
#include "dog.h"
/**
 * struct dog - a function that initialize a variable of type
 * @d: first member
 * @name: second member
 * @age: third member
 * @owner: forth member
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}