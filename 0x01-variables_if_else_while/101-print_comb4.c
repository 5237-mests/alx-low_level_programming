#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int i=48;
  int j=48;
  int x=48;
  while(i<58)
    {
      j=48;
      while(j<58)
	{
	  x=48;
	  while(x<58)
	    {
	      if(i<j&&j<x)
		{
		  if(j<x)
		    {
		      putchar(i);
		      putchar(j);
		      putchar(x);

		      if(x==57&&j==56)
			{
			  if(i==55)
			    {
			      break;
			    }
			}
		      putchar(',');
		      putchar(' ');
		    }
		}

	      x++;
	    }

	  j++;
	}
	
      i++;
    }
  putchar('\n');
  return(0);
}
