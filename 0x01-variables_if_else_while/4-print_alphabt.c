#include <stdio.h>
/**
  * main - prints all alphabets in lowercase execp e and q
  * Return: always succes
  */
int main(void)
{
	char letter[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i <= letter; letter++)
	{
		if (i != 'q' || i != 'e')
		{
			putchar(i);
		}
	}
	return (0);
}
