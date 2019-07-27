#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
*print_all - print anything
*@format: formato
*Return: nothing
**/
void print_all(const char * const format, ...)
{
	char *pun;
	int l = 0;

	va_list lr;
	va_start(lr, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[l] != '\0')
	{
		switch (format[l])
		{
			case 'c':
				printf("%c", (char) va_arg(lr, int));
				break;
			case 'i':
				printf("%d", va_arg(lr, int));
				break;
			case 'f':
				printf("%f", va_arg(lr, double));
				break;
			case 's':
				pun = va_arg(lr, char *);
				if (pun != NULL)
				{
					printf("%s", pun);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[l] == 'c' || format[l] == 'i' || format[l] == 'f' ||
			format[l] == 's') && format[l + 1] != '\0')
		{
			printf(", ");
		}
		l++;
	}
	va_end(lr);
	printf("\n");
}
