#include "main.h"
#include <stdio.h>
int prime(int n, int num);
/**
  * is_prime_number -  returns 1 if the input integer is a prime number
  * otherwise return 0
  * @n: the integer to be checked
  * Return: 1 or 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
/**
  * prime - find the prime numbers
  * @n: integer to be checked
  * @num: iteration
  * Return: the result
  */
int prime(int n, int num)
{
	if (num * num > n)
	{
		return (1);
	}
	else if (n % num == 0)
	{
		return (0);
	}
	return (prime(n, num + 1));
}
