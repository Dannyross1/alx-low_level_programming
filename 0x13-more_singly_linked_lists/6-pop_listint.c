#include "lists.h"

/**
 * pop_listint - delets the head node of a linked list in the code
 * @head: points to the first elements in the linked list
 *
 * Return: the data inside the element that was seleted,
 * or 0 in the list which is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numb);
}
