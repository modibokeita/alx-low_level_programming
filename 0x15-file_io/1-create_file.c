#include "main.h"
/**
  * create_file -  creates a file
  * @filename: name of fille
  * @text_content: the content of file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		b_written = write(fd, text_content, strlen(text_content));

		if (b_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
