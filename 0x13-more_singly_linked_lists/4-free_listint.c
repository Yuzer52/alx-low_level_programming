#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - It frees a linked list
  * @head: Head of the linked list
  *
  * Return: Nothing
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
