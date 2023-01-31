#include <stdlib.h>

#include <string.h>

#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{

	list_t *temp;
	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;
		return (temp);
	}

	return (0);

}

int _strlen(const char *s)
{
	int c = 0;

	while(*s)
		{
			s++;
			c++;

		}
	return (c);


}
