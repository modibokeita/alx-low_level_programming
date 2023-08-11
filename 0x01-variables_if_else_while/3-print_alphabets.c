#include <stdio.h>
/**
  * main - prints aphabet in uppercase and lowercase
  * Return: always success
  */
int main(void)
{
	int c, i;

	for (c = 'a'; c <= 'z'; c++);
	putchar(c);
	for (i = 'A'; i <= 'Z'; i++);
	putchar(i);
	putchar('\n');
	return (0);
}

