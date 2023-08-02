#include "lists.h"

/**
 * listint_len - Number of elements in a linked listint_t list
 * @h: listint_t
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}
