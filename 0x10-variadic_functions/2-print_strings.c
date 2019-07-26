#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
*print_strings - print the strings
*@n: numbers of arguments
*@separator: string between strings
*Return: nothing
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int ld;

	char *js;

	va_list stn;

	va_start(stn, n);

	for (ld = 0; ld < n; ld++)
	{
		js = va_arg(stn, char *);

		if (js == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", js);
		}
		if (separator != NULL && ld < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(stn);
	printf("\n");
}
