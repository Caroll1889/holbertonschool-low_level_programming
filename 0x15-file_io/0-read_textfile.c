#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*read_textfile - read a text file
*@filename: file name
*@letters: letters
*Return: numbers of letters
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, fr, fw, fc;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	fo = open(filename, O_RDONLY);

	if (fo == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(size_t) * letters);

	if (buf == NULL)
	{
		return (0);
	}

	fr = read(fo, buf, letters);

	if (fr == -1)
	{
		return (0);
	}
	fw = write(STDOUT_FILENO, buf, fr);

	if (fw == -1)
	{
		return (0);
	}
	fc = close(fo);

	if (fc == -1)
	{
		return (0);
	}
	free(buf);
	return (fr);
}
