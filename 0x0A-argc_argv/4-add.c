#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
int check_num(char *str);
/**
  * main - adds positive numbers
  * @argc: the size of argv
  * @argv: argument vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int count, sum = 0;
	int str_to_int;

	count = 1;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
/**
  * check_num - check - string there are digit
  * @str: array str
  * Return: Always 0 (Success)
  */
int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
