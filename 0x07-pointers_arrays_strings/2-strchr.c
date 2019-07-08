#include "holberton.h"
/**
* *_strchr - locates a character in a string
*@s: Pointer. The string in which the caracter is searched
*@c: caracter that is searched in the string
*Return: the first occurrence or null
**/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
