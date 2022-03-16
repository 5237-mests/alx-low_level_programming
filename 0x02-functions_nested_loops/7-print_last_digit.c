#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * @n: takes ln an integer
 * Return: returns output
 */
int print_last_digit(int n)
{
	int y= n % 10;

	if (n < 0)
		y = y * -1;
	_putchar(ln + '0');
	return (y);
}

