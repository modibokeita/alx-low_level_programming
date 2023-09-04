#include "main.h"
#include <stdlib.h>
/**
  * _strdup -  returns a pointer to a newly allocated
  * space in memory, which contains a copy
  * of the string given as a parameter
  * @str: stirng to be duplicated
  * Return: NULL if str = NULL
  */
char *_strdup(char *str)
{
	int i, len;

	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{

	}
	s = (char *)malloc((len + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}

	s[len] = '\0';

	return (s);
}
