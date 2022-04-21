#include "lists.h"
/**
 * list_len - returns the number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	int count = 0;
  
  if (h == NULL)
    printf("empty");
  list_t *ptr = NULL;
  
  ptr = h;
  while (ptr != NULL)
  {
    count++;
    ptr = ptr->next;    
  }
  printf("%d", count);
	
	return (count);
}
