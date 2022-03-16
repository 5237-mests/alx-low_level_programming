#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0, j;
  
  while (i<10)
  {
    j = 97;
    while (j < 123)
    {
      _putchar(j);
    j++;
    }
  _putchar('\n');
  i++;
  }
}
