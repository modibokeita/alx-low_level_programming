#include <stdio.h>
/**
  * main - prints alphabets in lowercase
  * Return: always success
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
