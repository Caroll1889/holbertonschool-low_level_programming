#include "holberton.h"
#include <stdio.h>
/**
* *leet - incode a string
*@s: pointer
*Return: s
**/
char *leet(char *s)
{
	int k, c;
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (c = 0; s[c] != '\0'; c++)
	{
		for (k = 0; l[k] != '\0'; k++)
		{
			if (s[c] == l[k])
				s[c] = n[k];
		}
	}
	return (s);
}
