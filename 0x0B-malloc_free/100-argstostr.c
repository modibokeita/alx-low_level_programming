#include "main.h"
#include <stdlib.h>
/**
  * argstostr - concatenates all the arguments of program
  * @ac: integer
  * @av: characters
  * Return:  a pointer to a new string
  */
char *argstostr(int ac, char **av)
{
	int i, index = 0, len = 0;
	char *args, *result;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		args = av[i];
		while (*args != '\0')
		{
			len++;
			args++;
		}
		len++;
	}
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		args = av[i];
		while (*args != '\0')
		{
			result[index] = *args;
			index++;
			args++;
		}
		result[index] = '\n';
		index++;
	}
	result[index] = '\0';
	return (result);
}
