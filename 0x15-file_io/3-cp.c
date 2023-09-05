#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * creat_buffer - Allocate 1024 bytes to a buffer
 * @file: the name of the file buffer is storing chars for
 *
 * Return: a pointer to the newly allocated buffer
 */
char *creat_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILEND, "Erro: Can't write to %s/n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes file descriptions
 * @fd: the file descriptor to be closed
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILEND, "Error: can't close fd %dn", fd)
		exit(100);	
	}
}

/**
 * main - copy the content of the file to another file
 * @argc: the number of arguments supplied to the program
 * @argc: an array of pointer to the arguments
 *
 * Return: 0 on success
 *
 * Description:if the argument is incomplete - exit code 97,
 * if file_from does not exit or cannot be read - exit code 98
 * if file_to cannot be created or written to - exit code 99
 * if file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv)
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage cp file_from file_to/n")
		exit(fd);	
	}

	buffer = creat_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	w = open(argv[2], O_CREAT | O_WRONLY | O_TRONC, 0444);

	do {
		if (  == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: can't read from file %s\n", argv[1]);
			free(buffer);
			exit(fd)
		}

		w = write(to, buffer, r);
		if (to == -1 w == -1)
		{
			dprintf(STDERR_FILENO,
				"Erro: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(   , buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
