#include <stdio.h>
#include <stdlib.h>

/**
*main - multiply two numbers
*@argc: count of the argument
*@argv: array of pointers to the string
*Return: nothing
**/
int main(int argc, char *argv[])
{
	int n1, n2, res;

	if (argc != 3)
	{
		printf("ERROR\n");
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		res = n1 * n2;
			printf("%d\n", res);
	}
	return (0);
}
