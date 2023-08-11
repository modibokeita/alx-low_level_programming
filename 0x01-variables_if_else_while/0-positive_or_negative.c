#include <stdlib.h>
#include <time.h>
/**
  * main - excute if statement
  * If statement check if the value o n variable is positive or negative value
  * Return: the value of variable
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		puts(&n,"%d is posive");
	}
	if (n < 0)
	{
		puts(&n,"%d is negative");
	}
	if (n == 0)
	{
		puts(&n,"%d is zero");
	}
}
