#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
*main - perform simple operation
*@argc: argument count
*@argv: argument vector
*Return: nothing
**/

int main(int argc, char *argv[])
{
	int (*rd)(int, int);
	int res;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	rd = get_op_func(argv[2]);

	if (rd == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = rd(num1, num2);
	{
		printf("%d\n", res);
	}
	return (0);
}
