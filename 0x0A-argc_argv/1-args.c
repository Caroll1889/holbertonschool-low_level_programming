#include <stdio.h>

/**
*main - prints the number of arguments
*@argc: count of the arguments
*@argv: array of pointers to the string
*Return: nothing
**/
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
