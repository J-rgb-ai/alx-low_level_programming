#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog -  initializes dog
 * @d: d for dog
 * @age: dog's age
 * @owner: pointer to owner
 * @name: dog's name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
