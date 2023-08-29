#include "main.h"
/**
  * _strstr -  locates a substring
  * @haystack: the strings to be checked
  * @needle: substring to be found
  * Return: a pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	if (*needle == '\0')
	{
		return (haystack);
	}
	return (NULL);
}
