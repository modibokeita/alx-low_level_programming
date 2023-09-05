#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void free_words(char **words);
/**
  * strtow - splits a string into words
  * @str: the string to be splited
  * Return: a pointer to an array of strings (words)
  */
char **strtow(char *str)
{
	int j, i = 0, count_words = 0;
	char **words;
	char *copy = strdup(str);
	char *s = strtok(copy, " ");

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	if (copy == NULL)
	{
		return (NULL);
	}
	while (s != NULL)
	{
		count_words++;
		s = strtok(NULL, " ");
	}
	words = (char **)malloc((count_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		 free(copy);
		return (NULL);
	}
	s = strtok(copy, " ");
	while (s != NULL && i < count_words)
	{
		words[i] = strdup(s);
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				 free(words[j]);
			}
			free(words);
			free(copy);
			return (NULL);
		}
		i++;
		s = strtok(NULL, " ");
	}
	words[i] = NULL;
	free(copy);
	return (words);
}
/**
  * free_words - checks the strings
  * @words: words to be checked
  * Return: 0
  */
void free_words(char **words)
{
	int i = 0;

	if (words == NULL)
	{
		return;
	}
	while (words[i] != NULL)
	{
		free(words[i]);
		i++;
	}
	free(words);
}
