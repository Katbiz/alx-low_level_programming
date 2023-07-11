#include "main.h"

/**
 * create_file - function that creates the file.
 *
 * @filename: it is a pointer to the name of
 * the file to be created.
 * @text_content: it is a pointer to a string to write to the file.
 *
 * Return: If the function fails, it will return -1.
 *         Otherwise otherwise it returns 1.
 */
int create_file(const char *filename, char *text_content)
{
	int sc, u, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	sc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	u = write(sc, text_content, leng);

	if (sc == -1 || u == -1)
		return (-1);

	close(sc);

	return (1);
}
