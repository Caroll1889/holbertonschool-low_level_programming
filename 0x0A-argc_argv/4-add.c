#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - add positive numbers
*@argc: count of the argument
*@argv: array of pointers to the string
*Return: nothing
**/
int main(int argc, char *argv[])
{
	int a, res, sum;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	while (argc-- && argc > 0)
	{
		for (a = 0; argv[argc][a] != '\0'; a++)
		{
			if (!(isdigit(argv[argc][a])))
			{
				printf("Error\n");
				return (1);
			}
		}
		res = atoi(argv[argc]);
		sum += res;
	}
	printf("%d\n", sum);
	return (sum);
}
