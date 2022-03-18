#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
  int i, j;
  
  i = size - 1;
  
  if (i = 0)
  {
    _putchar(35);
  }
  else if (i > 0)
  {
    for (j = 1; j < size; j++)
    {
      _putchar(' ');
    }
    _putchar(35);
  }
  else
  {
    _putchar('\n');
  }
	_putchar('\n');
}
