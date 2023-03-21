#include "main.h"
/**
 * _isalpha - for check alphabetic
 * @c: The char to be checked
 * Return: 1 for alpha and 0 for otherwise
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
