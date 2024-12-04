#include <stddef.h>
#include "lists.h"

/**
* list_len - Counts the number of elements in a linked list_t list
* @h: Pointer to the first element of the list_t list
*
* Description: This function traverses a linked list of type list_t
* and counts the total number of elements (nodes) present in the list.
* It does not modify the list but simply iterates through it.
*
* Return: The number of elements in the list
*/
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}
