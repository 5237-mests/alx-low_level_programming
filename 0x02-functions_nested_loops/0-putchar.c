#include "main.h"

/**
 * main - Prints _putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count;

	for (count = 0; count < 8; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
