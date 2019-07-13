#include <stdio.h>

/**
*main - prints all arguments
*@argc: count of the argument
*@argv: array of pointers to the string
*Return: nothing
**/
int main(int argc, char *argv[])
{
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}
	return (0);
}

