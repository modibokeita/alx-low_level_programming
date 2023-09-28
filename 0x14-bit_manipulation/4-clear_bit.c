#include "main.h"
/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: the value to be seted
  * @index: index of bits
  * Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int hide;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	hide = 1UL << index;

	*n &= ~hide;

	return (1);
}
