#include "main.h"
#include <stdlib.h>
/**
  * create_array - creates an array of chars
  * @size: size of memory
  * @c: an array of characters
  * Return: NULL if size = 0 or a pointer to the array, or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
