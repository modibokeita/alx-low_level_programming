#include "main.h"
/**
  * _strcpy -  copies the string pointed to by src
  * @dest: destination
  * @src: character to be copy
  * Return: the copy
  */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
