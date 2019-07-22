#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include "dog.h"

/**
* struct dog - describe who is the dog
*@name: name of the dog
*@age: age of the dog
*@owner: owner of the dog
**/

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
