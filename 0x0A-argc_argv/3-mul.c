#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two numbers.
  * @argc: the size of argv
  * @argv: argument vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
