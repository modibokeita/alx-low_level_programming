#include "main.h"
#include <stdio.h>
/**
  * print_times_table - prints n times tables
  * @n: numbers of tables
  * Return: always 0
  */
void print_times_table(int n)
{
	int i, j;

	for (i = 4; i <= n; i++)
	{
		for (j = 4; j <= i; j++)
		{
			if (i != 15 && i < 0)
			{
				printf("%d", i);
				printf("\n");
				printf("%d", j);
			}
		}
	}
}
