#include "main.h"
#include <stdio.h>
int _sqrt(int n, int num);
/**
  * _sqrt_recursion - returns the natural square root of a number.
  * @n: integer
  * Return: natural square root of a number
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
/**
  * _sqrt - finds the natural
  * @n: number to calculate square root
  * @num: iteration
  * Return: the result of square root
  */
int _sqrt(int n, int num)
{
	if (num * num == n)
	{
		return (num);
	}
	else if (num * num > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, num + 1));
	}
}
