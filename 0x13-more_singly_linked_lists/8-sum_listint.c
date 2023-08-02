#include "lists.h"

/**
 * sum_listint - Sum of all the data (n) of a listint_t linked list
 * @head: listint_t
 * Return: int
 */

int sum_listint(listint_t *head)

{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);

}
