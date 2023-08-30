#include "main.h"
/**
  *  _strlen_recursion - returns the length of a string
  * @s: the string which length has to be returned
  * Return: the length of string
  */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
