#include <stdio.h>
#include "lists.h"

/**
 * print_list -The program wil print all the elements of a linked list
 * @k: Is pointer to the list_t list to print
 *
 * Return:It then returns number of nodes printed
 */
size_t print_list(const list_t *k)
{
	size_t s = 0;

	while (k)
	{
		if (!k->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", k->len, k->str);
		k = k->next;
		s++;
	}

	return (s);
}
