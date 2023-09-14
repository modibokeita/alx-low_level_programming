#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
  * sum_them_all - returns the sum of all its parameters
  * @n: integers
  * @...: others arg
  * Return: the sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int total = 0;

	va_start(sum, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		total += va_arg(sum, int);
	}
	va_end(sum);
	return (total);
}
