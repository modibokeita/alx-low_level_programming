#include <stdio.h>
/**
  * main - prints  all the numbers of base 16 in lowercase
  * Return: always success
  */
int main(void)
{
	int n;
	int d;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (d = 97; d <= 102; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
