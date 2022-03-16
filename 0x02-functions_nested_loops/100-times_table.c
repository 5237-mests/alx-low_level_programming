#include "main.h"
/**
 * print_times_table - prints the times table
 * @n: takes in an integer
 */
void print_times_table(int n)
{
	int i, j, y;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			y = i * j;
			if (j == 0)
			{
				_putchar(y + '0');
			}
			else if (y <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(y + '0');
			}
			else if (y >= 10 && y < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((y / 100) + '0');
				_putchar(y / 10 % 10 + '0');
				_putchar(y % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
