#include "main.h"
/**
  * print_last_digit - prints the last digit
  * @n: the digits to be checked
  * Return: the value of last digit
  */
int print_last_digit(int n)
{
	int digit;

	if( n < 0)
	{
		n = -n;
		digit = n % 10;
	}
	if (digit < 0)
	{
		_putchar(digit + '0');
	}
	return (digit);
}
