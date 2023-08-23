#include "main.h"
/**
  * _strncat - concatenates two strings.
  * @dest: first string
  * @src: second string
  * @n: the the variable store
  * Return: a pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
