#include "main.h"
#include <unistd.h>
/**
 * _putchar - will write character c to stdout
 * @c: Character to print
 *
 * Return: 1 if successful
 * On error, -1  returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
