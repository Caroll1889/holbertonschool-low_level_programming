#include <stdio.h>

/**
* main - print the alphabet in lowercase and uppercase
*Return: 0
**/

int main(void)
{
	int l, r;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	for (r = 'A'; r <= 'Z'; r++)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
