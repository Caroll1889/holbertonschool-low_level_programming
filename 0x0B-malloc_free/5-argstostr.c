#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *argstostr - concatenate all the arguments
*@ac: number of arguments
*@av: arguments
*Return: k
**/
char *argstostr(int ac, char **av)
{
	int o, h, mas;
	char *k, *ret;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (o = 0; o < ac; o++)
	{
		h = 0;
		while (av[o][h] != '\0')
		{
			h++;
			mas++;
		}
		mas++;
	}
	mas++;

	ret = malloc(mas * sizeof(char));

	if (ret == NULL)
	{
		return (NULL);
	}

	k = ret;

	for (o = 0; o < ac; o++)
	{
		h = 0;
		while (av[o][h] != '\0')
		{
			*ret = av[o][h];
			h++;
			ret++;
		}
		*ret = '\n';
		ret++;
	}
	return (k);
}
