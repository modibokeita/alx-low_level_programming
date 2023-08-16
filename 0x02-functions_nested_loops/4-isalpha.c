#include "main.h"
/**
  * _isalpha - checks alpabet
  * @c: the charater to be checked
  * Return: 1 is charater is lowercase otherwise 0
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		if (c >= 97 && c <= 122)
		{
			return (1);
		}
		return (1);
	}
	else
	{
		return (0);
	}
}
