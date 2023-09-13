#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
  * print_name - prints a name
  * @name: name to be printed
  * @f: function as pointer
  * Return: 0
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
