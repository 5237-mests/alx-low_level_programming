#include "main.h"

/**
 *_pow_recursion - returns the pwoer of num
 *@x: base
 *@y: exponent
 *Return: value of the exponent.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0 )
		return (-1);
	else if (y == 0)
		return 1;
	else
		 return (x * _pow_recursion(x, y-1);
		
}
