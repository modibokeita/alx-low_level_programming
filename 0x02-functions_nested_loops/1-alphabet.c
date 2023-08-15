#include "main.h"
#include <unistd.h>
/**
  * main - prints alphabet
  * Return: always 0
  */
void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch < 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return;
}
