#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _puts - prints a string, followed by a new line, to stdout
  * @str: string to be print
  * Return: 0
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
