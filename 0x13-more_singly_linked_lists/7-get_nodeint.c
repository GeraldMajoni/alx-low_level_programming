#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node of
 * a listint_t linked list.
 * @head: pointer to the head of the listint_t list.
 * @index: index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL.
 * Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
