#include "main.h"
/**
  * _strpbrk -  searches a string for any of a set of bytes
  * @s: the strings to be checked
  * @accept: the strings to be found
  * Return: a pointer to the byte in s that matches one of the bytes in accept
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
