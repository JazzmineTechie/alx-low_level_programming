#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a linked list
 * @head: first node in the linked list
 *
 * Return: The sum of all the data in a linked list
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