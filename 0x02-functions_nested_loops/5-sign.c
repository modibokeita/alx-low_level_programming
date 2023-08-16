#include "main.h"
/**
  * int print_sign - checks the sign of numbers
  * Retrun: 1 and prints + if n is greater than zero or 0 and prints 0 if n is zero or -1 and prints - if n is less than zero
  */
int print_sign(int n)
{
	int num;

	for (num = 0; num <= n; num++)
	{
		if (num > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (num == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
	return (n);
}
