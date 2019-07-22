#include <stdio.h>
#include "dog.h"

/**
* init_dog - define the structure
*@d: dog
*@name: name of the dog
*@age: age of the dow
*@owner: owner of the dog
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
	}
	;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
