#include "main.h"
/**
  * _islower - check if c is lowercase
  *@c: checks aphabets
  * Return: 1 otherwise 0
  */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
