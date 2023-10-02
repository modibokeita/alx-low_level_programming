#include "main.h"
/**
  * read_textfile - reads a text file and prints it to
  * the POSIX standard output.
  * @filename: file name pointer
  * @letters: size of characters
  * Return: the actual number of letters
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = (char *)malloc(letters);
	ssize_t b_read;
	ssize_t b_written;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	b_read = read(fd, buffer, letters);

	if (b_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	b_written = write(STDOUT_FILENO, buffer, b_read);

	if (b_written == -1 || b_written != b_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (b_written);
}
