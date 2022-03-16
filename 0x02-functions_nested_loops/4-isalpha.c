#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: takes in a character
 * Return: 1 if letter, lowercase, uppercase; 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

