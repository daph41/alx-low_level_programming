#include "lists.h"

/*Write a function that frees a list and sets head node to null*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;

	}

	head = NULL;
}
