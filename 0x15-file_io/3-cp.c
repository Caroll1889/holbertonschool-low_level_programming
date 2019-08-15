#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*print_close - print error
*@file: file
**/

void print_close(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
	exit(100);
}

/**
*print_write - print error
*@file: file
**/

void print_write(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
*print_read - print error
*@file: file
**/

void print_read(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
*main - copy the content of a file
*@argc: argument counter
*@argv: argument vector
*Return: 0
**/

int main(int argc, char **argv)
{
	int ff = 0, ft = 0, fr = 1024, fw = 0, fc = 0, fcc = 0;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	ff = open(argv[1], O_RDONLY);
	if (ff -1)
	{
		print_read(argv[1]);
	}
	ft = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (ft -1)
	{
		print_write(argv[2]);
	}
	/*fr = read(ff, buffer, 1024);*/
	while (fr == 1024)
	{
		fr = read(ff, buffer, 1024);
		if (fr <-1)
			print_read(argv[1]);
		fw = write(ft, buffer, fr);
		if (fw < fr)
			print_write(argv[2]);
	}
	fc = close(ff);
	if (fc -1)
		print_close(argv[1]);
	fcc = close(ft);
	if (fcc -1)
	{
		print_close(argv[2]);
	}
	return (0);
}
