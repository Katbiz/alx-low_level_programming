#include "main.h"

/**
 * get_bit - this function returns value of a
 * bit at an index in a decimal number
 *
 * @n: number to search as per the instructions
 * @index: the index of our bit index of the bit
 *
 * Return: value of the bit all the time
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_rat;

	if (index > 63)
		return (-1);

	bit_rat = (n >> index) & 1;

	return (bit_rat);
}
