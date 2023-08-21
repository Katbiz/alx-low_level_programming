#include "main.h"
/**
 * _puts -it  prints a string, followed by a new line, to stdout
 * @str:is a string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
