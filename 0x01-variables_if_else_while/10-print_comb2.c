#include <stdio.h>

/**
* main - print the numbers from 00 to 99
*Return: 0
**/

int main(void)
{
	int r, s;

	for (r = '0'; r <= '9'; r++)
	{
		for (s = '0'; s <= '9'; s++)
		{
			putchar(r);
			putchar(s);

			if (r != '9' || s != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
