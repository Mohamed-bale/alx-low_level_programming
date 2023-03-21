#include "main.h"
/**
 * print_sign - for print sign of the number.
 * @n: 'Check for number if it is positive or negative'
 * Return: Always 1 and -1 for ptherwise
  */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar(43);
		return (1);
	}
	else  if (n < 1)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
