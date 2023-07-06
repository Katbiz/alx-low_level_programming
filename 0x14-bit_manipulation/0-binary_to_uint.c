#include "main.h"

/**
 * binary_to_uint - is the prototype used to convert the binary
 * number to the signed integer
 *
 * @b: is the string in subject containing the binary number
 *
 * Return: the program returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sub = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		sub = 2 * sub + (b[i] - '0');
	}

	return (sub);
}
