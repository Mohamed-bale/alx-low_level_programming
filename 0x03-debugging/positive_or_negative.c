#include "main.h"
/**
 * positive_or_negative - Check if the num is positive or negative or zero
 * @i: 'Check for number if it is positive or negative'
 * Return: ....
  */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
