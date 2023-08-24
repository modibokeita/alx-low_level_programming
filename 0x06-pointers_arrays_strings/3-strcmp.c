#include "main.h"
#include <string.h>
/**
  * _strcmp - compares two strings
  * @s1: first string
  * @s2: second string
  * Return: if two strings are equal returnss 0
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i]; i++)
	{
		for (i = 0; s2[i]; i++)
		{
			if (s1[i] == s2[i])
			{
				return (0);
			}
			else
			{
				return (s1[i] - s2[i]);
			}
		}
	}
	return (0);
}
