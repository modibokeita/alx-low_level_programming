#include <stdio.h>
/**
  * main - prints all single digit numbers of base 10 starting from 0
  * Return: always success
  */
int main(void)
{
	int digits;

	for (digits = '0'; digits <= '9'; digits++)
	{
		putchar(digits);
	}
	putchar('\n');
	return (0);
}
