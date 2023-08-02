#include "lists.h"
#include <stdio.h>

/**
 * listen_len - Outputs the number of elements in alinked listint_t list.
 * @h: A pointer to the head of the list_int list.
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
