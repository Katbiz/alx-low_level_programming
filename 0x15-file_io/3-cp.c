#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - this function will allocate 1024 bytes for a buffer.
 * @file: This is the name of the file buffer is storing chars for.
 *
 * Return: succesfully it returns a pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error1: Cannott write to %s!\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - This function closes
 *              the file descriptors.
 * @fd: this is the file descriptor to be closed.
 */
void close_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error1: File can't close fd! %d\n", fd);
		exit(100);
	}
}

/**
 * main - Main function copies the contents
 *        of a file to another file.
 * @argc: this is the number of arguments supplied to the program.
 * @argv: This is an array of pointers to the arguments.
 *
 * Return: int 0 on success.
 *
 * If file_to or file_from cannot be closed - exit code 100.
 * If file_to cannot be created or written to - exit code 99.
 * If file_from does'nt either exist or cannot be read - exit code 98.
 * Description: If the argument count is false - exit code 97.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
