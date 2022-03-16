#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 * @void: no argument
 */
void times_table(void)
{
	int i = 0, j;
  while (i < 10)
  { 
    j = 0;
    while (j < 10)
    { 
      _putchar('0');
      _putchar(i * j + '0');
      j++;
    }
    _putchar('\n');
  i++;
  }
}

