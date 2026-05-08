#include "sort.h"

/**
 * swap_nodes - Swaps two nodes in a listint_t doubly linked list.
 * @list: A pointer to the head of the doubly-linked list.
 * @node1: A pointer to the first node to swap.
 * @node2: A pointer to the second node to swap.
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	listint_t *before, *after;

	before = node1->prev;
	after = node2->next;

	if (before != NULL)
		before->next = node2;
	else
		*list = node2;

	if (after != NULL)
		after->prev = node1;

	node2->prev = before;
	node2->next = node1;
	node1->prev = node2;
	node1->next = after;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_nodes(list, insert, iter);
			print_list((const listint_t *)*list);
			insert = iter->prev;
		}
	}
}
