#include  <stdlib.h>
#include "lists.h"
/**
*list_len- returns the numberof the element in a linked list 
*@h: pointer to all the list_t linked
*
*Return: all the number of elements in h
*/
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h)
{
n++;
h = h->next;
}
return (n);
}
