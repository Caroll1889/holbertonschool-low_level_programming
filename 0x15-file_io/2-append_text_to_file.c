#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*append_text_to_file - append text
*@filename: file name
*@text_content: char
*Return: 1 or -1
**/

int append_text_to_file(const char *filename, char *text_content)
{
	int wtf = 0, i = 0, of = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	of = open(filename, O_RDWR | O_APPEND);

	if (text_content == NULL)
	{
		return (1);
	}

	else if (of == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
		wtf = write(of, text_content, i);
	}

	if (wtf == -1 || wtf != i)
	{
		return (-1);
	}
	return (1);
}
