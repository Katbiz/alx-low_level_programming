#include "main.h"

/**
 * flip_bits - this one  counts the number
 * of bits to change
 * to get from one number to another
 *
 * @n: the first subject number first number
 * @m: second number in subject
 *
 * Return: always returns the number of bits to change
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int thecurrent;
	unsigned long int theexclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		thecurrent = theexclusive >> i;
		if (thecurrent & 1)
			count++;
	}

	return (count);
}
