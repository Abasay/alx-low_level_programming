#include "lists.h"

/**
 * list_len - length of a node
 * @h: param node
 *
 * Return: struct
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}

	return (nelem);
}
