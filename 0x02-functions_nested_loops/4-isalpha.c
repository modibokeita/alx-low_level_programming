#include "main.h"
/**
  * @c: checks the alphabet
  * Return: 1 otherwise 0
  */
int _isalpha(int c)
{
	if (c <= 97 && c >= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
