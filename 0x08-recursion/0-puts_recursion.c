#include "main.h"
/**
  * _puts_recursion - prints a string, followed by a new line
  * @s: the strings to be printed
  * Return: 0
  */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
