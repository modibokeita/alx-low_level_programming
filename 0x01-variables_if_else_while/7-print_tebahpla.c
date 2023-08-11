#include <stdio.h>
/**
  * main the lowercase alphabet in reverse
  * Return: always success
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
