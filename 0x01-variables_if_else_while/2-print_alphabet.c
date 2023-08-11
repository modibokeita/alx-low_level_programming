#include <stdio.h>
int main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	putchar("%c", i);
	return (0);
}
