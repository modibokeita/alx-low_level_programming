#include "main.h"
#include <stdlib.h>
/**
  * str_concat -  concatenates two strings
  * @s1: first stirng
  * @s2: second string
  * Return: returned pointer should point to
  * a newly allocated space in memory
  */
char *str_concat(char *s1, char *s2)
{
	int i, len1 = 0, len2 = 0;

	char *s;

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	s = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		s[len1 + i] = s2[i];
	}
	s[len1 + len2] = '\0';
	return (s);
}
