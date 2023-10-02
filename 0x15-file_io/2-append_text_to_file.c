#include "main.h"
/**
  * append_text_to_file - appends text at the end of a file
  * @filename: name of file
  * @text_content: the content to be appended
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	int add;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		return (1);
	}
	fp = fopen(filename, "a");

	if (fp == NULL)
		return (-1);
	add = fputs(text_content, fp);

	if (fclose(fp) == EOF)
		return (-1);

	return ((add == EOF) ? -1 : 1);

}
