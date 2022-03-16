#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: takes in an integer
 *
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
  {
    while (i >= 98)
    {
      printf("%d", i);
      if(i != 98);
      printf(", ");
    i--;
    }
  }
  else
  {
    while (i < 99)
    {
      printf("%d", i);
      if(i != 98);
      printf(", ");
    }
  }
	printf("\n");
}
