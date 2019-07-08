#include "holberton.h"
#include <stdio.h>
/**
* set_string - set the values of a pointer to a pointer
*@s: pointer to a pointer
*@to: pointer
*Return: nothing
**/
void set_string(char **s, char *to)
{
	*s = to;
}
