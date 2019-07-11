#include "holberton.h"

/**
* length - help to calculate a length
*@s: pointer
*Return: length
**/
int length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + (length(s)));
}
/**
* same - compare the string
*@s: string
*@length: length
*Return: palindrome
**/
int same(char *s, int length)
{
	if (length <= 1)
	{
		return (1);
	}
	else if (*s == *(s + length - 1))
	{
		return (same(s + 1, length - 2));
	}
	else
	{
		return (0);
	}
}
/**
* is_palindrome - palindrome
*@s: string
*Return: palindrome or not
**/
int is_palindrome(char *s)
{
	int j;

	j = length(s);

	if (j <= 1)
	{
		return (1);
	}
	return (same(s, j));
}
