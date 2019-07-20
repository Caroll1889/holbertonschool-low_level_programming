#include <stdio.h>

/**
* main - print the numbers of base 16
*Return: 0
**/

int main(void)
{
	char j;
	int s;

	for (s = '0'; s <= '9'; s++)
	{
		putchar(s);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
