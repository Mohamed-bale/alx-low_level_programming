#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Discription: 'Check for number if it is positive or negative'
 * Return: Always 0
  */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
