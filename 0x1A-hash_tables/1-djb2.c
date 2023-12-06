#include "hash_tables.h"

/**
 * hash_djb2 - this is the hash function to implement djb2 algorithm.
 * @str: This is a pointer to null-terminated byte string to be examined.
 *
 * Return: The new hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
