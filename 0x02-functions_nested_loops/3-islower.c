#include "main.h"
/**
  * _islower - check if c is lowercase
  *@parameter c takes aphabets
  * Return: 1 otherwise 0
  */
int _islower(int c)
{

	if (c == 'a' || c == 'b' || c == 'd' || c == 'e' || c == 'f' || c == 'g' || c == 'h' || 'i' || 'j' || c == 'k' || c == 'l' || c == 'm' || c == 'n' || c == 'o' || c == 'p' || c == 'q' || c == 'r' || c == 's' || c == 't' || c == 'u' || c == 'v' || c == 'w' || c == 'x' || c == 'y' || c == 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
