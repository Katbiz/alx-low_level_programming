#include "lists.h"

/**
 * print_listint - We print all elements of linked list
 * @b: linked list of type listint_t to print
 *
 * Return: number the of nodes
 */
size_t print_listint(const listint_t *b)
{
	size_t num = 0;

	while (b)
	{
		printf("%d\n", b->n);
		num++;
		b = b->next;
	}

	return (num);
}
