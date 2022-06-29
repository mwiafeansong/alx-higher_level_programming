#include "stdio.h"
#include "stdlib.h"
#include "lists.h"

/**
 * insert_node - inserts number into sorted linked list
 * @head: pointer to head of linked list
 * @number: number to insert
 *
 * Return: address of new node or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *ptr = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;

	if (ptr == NULL || ptr->n >= number)
	{
		new->next = ptr;
		*head = new;
		return (new);
	}

	while (ptr && ptr->next && ptr->next->n < number)
		ptr = ptr->next;
	new->next = ptr->next;
	ptr->next = new;

	return (new);
}
