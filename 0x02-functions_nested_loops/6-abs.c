#include "main.h"
/**
 * _abs - Computes the abslute value.
 * @c: 'Check for number if it is positive or negative'
 * Return: Always c or abs_val
  */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
