#include "main.h"
/**
  * print_to_98 - prints all natural numbers from n to 98
  * @n: the numbers to be print
  * Return: always 0
  */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if(i != 98)
			{
				puts("%d, ", i);
			}
			else if (i == 98)
			{
				puts("%d\n", i);
			}
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
			{
				puts("%d, ", j);
			}
			else if (j == 98)
			{
				puts("%d\n", j);
			}
		}
	}
}
