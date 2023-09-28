#include "main.h"
/**
  * binary_to_uint - converts a binary number
  * to an unsigned int
  * @b: a pointer to binary number to be
  * converted
  * Return: the converted number, or 0 if
  * there is one or more chars in the string
  * b that is not 0 or 1 b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		binary = (binary << 1) | (*b - '0');
		b++;
	}

	return (binary);
}
