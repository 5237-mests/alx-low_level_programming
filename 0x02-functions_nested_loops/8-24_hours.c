#include "main.h"
/**
 * jack_bauer - prints every minute of the day 00:00 to 23:59
 * @void - no argument
 */
void jack_bauer(void)
{
	int i = 0, j;

	while (i < 24)
  {
    j = 0;
    while (j < 60)
    {
      _putchar(i / 10 + '0');
      _putchar(i % 10 + '0');
      _putchar(':');
      _putchar(j / 10 + '0');
      _putchar(j % 10 + '0');
    j++;
    }
    _putchar('\n');
    i++;
  }
}

