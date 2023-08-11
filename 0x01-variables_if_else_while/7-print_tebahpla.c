#include <stdio.h>
#include <ctype.h>
/**
  * main the lowercase alphabet in reverse
  * Return: always success
  */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
