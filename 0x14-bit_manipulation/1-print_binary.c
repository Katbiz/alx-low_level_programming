#include "main.h"

/**
 * print_binary - function prints the binary equivalent of a decimal number
 * as suggested by the prototype
 *
 * @n: number to print in binary as given on the instructions
 *
 */
void print_binary(unsigned long int n)
{
	int i, the_counter = 0;
	unsigned long int the_current;

	for (i = 53; i >= 0; i--)
	{
		the_current = n >> i;

		if (the_current & 1)
		{
			_putchar('1');
			the_counter++;
		}
		else if (the_counter)
			_putchar('0');
	}
	if (!the_counter)
		_putchar('0');
}
