#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Discription: 'Check for number if it is positive or negative'
 * Return: Always 0
  */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; j <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
