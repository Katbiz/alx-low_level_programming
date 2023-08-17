#include "lists.h"

/**
 * free_dlistint - This function frees a dlistint_t list.
 * @head: this is a pointer to the head of the list
 * Return: returns nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
