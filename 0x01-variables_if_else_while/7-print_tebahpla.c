#include <stdio.h>
/**
   *main - Entry point
   *Discription: 'Check for number if it is positive or negative'
   *Return: Always 0
  */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
