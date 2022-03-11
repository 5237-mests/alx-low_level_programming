#include <stdio.h>
/*
*main function prints hexadecimal numbers in lowercase.
*
*return alwas give final of execution
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
