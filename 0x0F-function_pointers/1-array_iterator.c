#include "function_pointers.h"
#include <stdio.h>
/**
  * array_iterator - executes a function given as a parameter
  * on each element of an array
  * @array: an array of integers
  * @action: a pointer to function
  * @size: size of array
  * Return: 0
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
