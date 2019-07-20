#include <stdio.h>

/**
* main - print all posibble combination
*Return: 0
**/

int main(void)
{
	int s;

	for (s = '0'; s <= '9'; s++)
	{
		putchar(s);
		if (s != '9')
		{
			putchar(',');
		}
		if (s != '9')
		{
			putchar(' ');
		}
	
	}
	putchar('\n');
	return (0);
}
