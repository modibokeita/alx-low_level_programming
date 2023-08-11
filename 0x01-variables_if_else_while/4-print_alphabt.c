#include <stdio.h>
/**
  * main - prints all alphabets in lowercase execp e and q
  * Return: always succes
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
