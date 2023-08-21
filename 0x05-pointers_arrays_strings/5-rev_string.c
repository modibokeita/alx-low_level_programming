#include "main.h"
#include <string.h>
/**
  * rev_string - reverses a string.
  * @s: string to be reverse
  * Return: 0
  */
void rev_string(char *s)
{
	int i, len;

	char *begin, *end = s;

	for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
	{
		end++;
	}
	len = i + 1;

	begin = s;

	for (i = 0; i < len / 2; i++)
	{
		char x;

		x = *end;
		*end = *begin;
		*begin = x;
		begin++;
		end--;
	}
	end[len + 1] = '\0';
}
