#include "main.h"
/**
  * _isalpha - checks alpabet
  * @c: the charater to be checked
  * Return: 1 is charater is lowercase otherwise 0
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
