#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* *_strcpy - copies
*@dest: destiny
*@src: source
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

/**
* *new_dog - create a new dog
*@name: name
*@age: age
*@owner: owner
*Return: new dog
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *nname, *nowner;
	int l, r;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (l = 0; l != '\0'; l++)
	;
	for (r = 0; r != '\0'; r++)
	;
	nname = malloc(sizeof(char *) * (l + 1));
	if (nname == NULL)
	{
		free(nname);
		free(new_dog);
		return (NULL);
	}
	nowner = malloc(sizeof(char *) * (r + 1));
	if (nowner == NULL)
	{
		free(nowner);
		free(nname);
		free(new_dog);
		return (NULL);
	}
	nname = _strcpy(nname, name);
	nowner = _strcpy(nowner, owner);
	new_dog->name = nname;
	new_dog->age = age;
	new_dog->owner = nowner;
	return (new_dog);
}
