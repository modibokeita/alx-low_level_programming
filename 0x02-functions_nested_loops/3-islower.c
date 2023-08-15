#include "main.h"
/**
  * _islower - check if c is lowercase
  *@parameter c takes aphabets
  * Return: 1 otherwise 0
  */
int _islower(int c)
{

	if (c == 'a' || c == 'z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
