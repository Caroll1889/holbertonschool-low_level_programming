#include <stdio.h>
#include "function_pointers.h"

/**
*print_name - print a name
*@name: name
*@f: function
*Return: nothing
**/

void print_name(char *name, void (*f)(char *))
{
	void (*dc)(char *);

	if (name == NULL || f == NULL)
	{
		return;
	}
	dc = f;
	dc(name);
}
