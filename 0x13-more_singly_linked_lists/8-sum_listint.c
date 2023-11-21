#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint -  The sum of all the data of a linked list
  * @head: Head of a linked list
  *
  * Return: if the list is empty, return 0
  */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
