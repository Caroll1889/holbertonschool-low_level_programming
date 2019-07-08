#include "holberton.h"
/**
* *_strstr - locates a substring
*@haystack: The string that needs to be scanned
*@needle: String containing the sequence of character to match
*Return: Pionter or null
**/
char *_strstr(char *haystack, char *needle)
{
	int x, y, z;

	x = 0;

	while (haystack[x] != '\0')
	{
		z = x;
		y = 0;

		while (haystack[x] == needle[y] && haystack[x] != '\0' && needle[y] != '\0')
		{
			x++;
			y++;
		}

		if (needle[y] == '\0')
		{
			return (haystack + z);
		}
			x = z + 1;
	}
	return ('\0');
}
