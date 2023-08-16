#include "main.h"
/**
  * print_sign - checks the sign of numbers
  * @n: the numbers to be checked
  * Return: if n > 0 return 1 and print + and so on
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
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
