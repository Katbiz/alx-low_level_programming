#include "main.h"

/**
 * append_text_to_file - This is dunction that
 * appends text at the end of a file.
 * @filename: it is a pointer that points to the name of the file.
 * @text_content: The subject string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL we get -1.
 *         If the file does not exist the user lacks write
 *         permissions we also get -1.
 *         Otherwise on success we will get - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, u, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	u = write(p, text_content, leng);

	if (p == -1 || u == -1)
		return (-1);

	close(p);

	return (1);
}
