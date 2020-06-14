#include "sort.h"
/**
 * _swap - swap 2 nodes
 * @i: first node
 * @j: second node
 */
void _swap(listint_t *i, listint_t *j)
{
if (i->prev)
i->prev->next = j;
if (j->next)
j->next->prev = i;
i->next = j->next;
j->prev = i->prev;
i->prev = j;
j->next = i;
}
/**
 * insertion_sort_list - insertion a doubly-linked list
 * @list: adresse
 */
void insertion_sort_list(listint_t **list)
{
listint_t *a, *b;

if ((!list || !(*list)) || !(*list)->next)
return;
a = (*list)->next;
while (a)
{
b = a;
a = a->next;
while (b && b->prev)
{
if (b->prev->n > b->n)
{
_swap(b->prev, b);
if (!b->prev)
*list = b;
print_list((const listint_t *)*list);
}
else
b = b->prev;
}
}
}
