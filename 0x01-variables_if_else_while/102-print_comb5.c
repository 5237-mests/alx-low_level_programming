#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 48; int j = 48;
int x = 48; int y = 48;
int op1; int op2;

while (i < 58)
{
j = 48;
while (j < 58)
{
x = 48;

while (x < 58)
{
y = 48;

while (y < 58)
{
op1 = i + j;
op2 = x + y;
if (op1 < op2)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(x);
putchar(y);
if (y == 57 && x == 57 && j == 56 && i == 57)
break;
putchar(',');
putchar(' ');
}
y++;
}
x++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
