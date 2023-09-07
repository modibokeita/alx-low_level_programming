#include "main.h"
#include <stdlib.h>
/**
  * array_range - creates an array of integers
  * @min: min of integer
  * @max: max of integer
  * Return: the pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int i, n;
	int *arr;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	arr = malloc(sizeof(int) * n);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
