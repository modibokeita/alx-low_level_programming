#include "main.h"
/**
  * _strspn - gets the length of a prefix substring.
  * @s: the strings
  * @accept: the length of substirng
  * Return: the number of bytes in the initial segment of s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int count = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (count);
			}
		}
		s++;
	}
	return (count);
}


