#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char aA[52]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int i;
  for(i=0; i<52; i++)
  {
  putchar(aA[i]);
  }
  putchar('\n');
  return(0);
  
}
