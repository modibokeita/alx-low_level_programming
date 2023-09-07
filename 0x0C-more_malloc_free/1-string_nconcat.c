#include "main.h"
#include <stdlib.h>
/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: the to allocate
  * Return: pointer shall point to a newly allocated space in memory
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)

		s1 = "";
	if (s2 == NULL)

		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2] && len2 < n)
		len2++;
	ptr = malloc(len1 + len2 + 1);

	if (ptr == NULL)
		exit(98);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
