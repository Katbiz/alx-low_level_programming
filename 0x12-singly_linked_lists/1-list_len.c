#include <stdlib.h>
#include "lists.h"

/**
 * list_len - will return number of elements in linked list
 * @k: pointer to the list_t list
 *
 * Return: This will return the number of elements in k
 */
size_t list_len(const list_t *k)
{
	size_t n = 0;

	while (k)
	{
		n++;
		k = k->next;
	}
	return (n);
}
