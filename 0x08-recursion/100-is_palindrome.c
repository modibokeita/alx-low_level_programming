#include "main.h"
int _strlen(char *s);
int check_palindrome(char *s, int begin, int end);
/**
  * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
  * @s: the strings to be checked
  * Return: 1 or 0
  */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_palindrome(s, 0, len - 1));
}
/**
  * _strlen - Returns the length of a string
  * @s: The string.
  * Return: The length of the string.
  */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 +  _strlen(s + 1));
}
/**
  * check_palindrome - Helper function to check if a string is a palindrome
  * @s: The string to be checked.
  * @begin: The starting index.
  * @end: The ending index
  *  Return: 1 if palindrome, 0 if not
  */
int check_palindrome(char *s, int begin, int end)
{
	if (begin >= end)
	{
		return (1);
	}
	else if (s[begin] != s[end])
	{
		return (0);
	}
	return (check_palindrome(s, begin + 1, end - 1));
}
