#include "main.h"
/**
 * _islower - check for lower
 * @c: The char to be check
 * Return: 1 for lowercase and 0 for else
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
