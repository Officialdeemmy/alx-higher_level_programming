#include "lists.h"
#include <stdio.h>
void reverse(listint_t **head);
int compare_lists(listint_t *head, listint_t *middle, int len);

/**
 * is_palindrome - Checks if singly linked list is a palindrome.
 * @head: Pointer to pointer of first node in listint_t list.
 * Return: 0 if not palindrome, 1 if it is.
 */
int is_palindrome(listint_t **head)
{
	int len;
	int n;
	listint_t *temp;
	listint_t *middle;

	if (head == NULL || *head == NULL)
		return (1);
	temp = *head;
	middle = *head;

	for (len = 0; temp != NULL; len++)
		temp = temp->next;

	len = len / 2;

	for (n = 1; n < len; n++)
		middle = middle->next;
	if (len % 2 != 0 && len != 1)
	{
		middle = middle->next;
		len = len - 1;
	}
	reverse(&middle);
	n = compare_lists(*head, middle, len);

	return (n);
}

/**
 * compare_lists - Compares two lists.
 * @head: Pointer to the head node.
 * @middle: Pointer to the middle node.
 * @len: legnth of the lists.
 * Return: If the lists are same 1. Otherwise 0.
 */
int compare_lists(listint_t *head, listint_t *middle, int len)
{
	int n;

	if (head == NULL || middle == NULL)
		return (1);
	for (n = 0; n < len; n++)
	{
		if (head->n != middle->n)
			return (0);
		head = head->next;
		middle = middle->next;
	}
	return (1);
}

/**
 * reverse - Reverses a linked list.
 * @head: Pointer to the pointer to the head of a linked list.
 */
void reverse(listint_t **head)
{
	listint_t *curr;
	listint_t *nxt;
	listint_t *pre;

	if (head == NULL || *head == NULL)
		return;

	pre = NULL;
	curr = *head;
	while (curr != NULL)
	{
		nxt = curr->next;
		curr->next = pre;
		pre = curr;
		curr = nxt;
	}
	*head = pre;
}
