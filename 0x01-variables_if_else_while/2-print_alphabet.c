#include <stdio.h>
/**
*main - print the alphabet in lowercase
*Return: 0
**/

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
