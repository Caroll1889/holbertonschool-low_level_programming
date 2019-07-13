#include <stdio.h>

/**
*main - prints its name
*@argc: count of the argument
*@argv: array of pointers to the string
*Return: nothing
**/
int main(int argc, char *argv[])
{
	int f;

	for (f = 0; f < argc; f++)
	{
		printf("%s\n", argv[f]);
	}
	return (0);
}
