#include "main.h"

/**
 * set_bit - is a function that sets the
 * sets a bit at a given index to 1
 *
 *
 * @n: is a pointer to the number to change
 *
 * @index: represents the index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
