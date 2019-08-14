#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*create_file - create a file
*@filename: file name
*@text_content: char
*Return: 1 or -1
**/

int create_file(const char *filename, char *text_content)
{
	int fo, i = 0, wtf;

	if (filename == NULL)
	{
		return (-1);
	}

	fo = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fo == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
		wtf = write(fo, text_content, i);
	}

	if (wtf == -1 || wtf != i)
	{
		return (-1);
	}

	close(fo);
	return (1);
}
