#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this Reads the text
 * file print to the STDOUT.
 *
 * @filename: this is the text file being read
 * @letters: This is the number of letters to be read
 * Return: v- which is the actual number of bytes read and printed
 *        and 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t sc;
	ssize_t u;
	ssize_t v;

	sc = open(filename, O_RDONLY);
	if (sc == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	v = read(sc, buf, letters);
	u = write(STDOUT_FILENO, buf, v);

	free(buf);
	close(sc);
	return (u);
}
