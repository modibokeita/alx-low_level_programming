#include "main.h"
int main(int argc, char *argv[]);
/**
  * handle_error - handles error
  * @exit_code: exit code if error
  * @message: message to print
  * Return: 0
  */
void handle_error(int exit_code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}
/**
  * main - check the code
  * @argc: argument of vector
  * @argv: vector pointer
  * Return: 0;
  */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int fd_source, fd_dest;
	ssize_t b_read, b_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		handle_error(97, "Usage: cp file_from file_to");
	}

	fd_source = open(file_from, O_RDONLY);

	if (fd_source == -1)
	{
		handle_error(98, "Error: Can't read from file");
	}
	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_dest == -1)
	{
		handle_error(99, "Error: Can't write to file");
	}

	while ((b_read = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		b_written = write(fd_dest, buffer, b_read);

		if (b_written == -1)
		{
			handle_error(99, "Error: Can't write to file");
		}
	}
	if (b_read == -1)
	{
		handle_error(98, "Error: Can't read from file");
	}
	if (close(fd_source) == -1 || close(fd_dest) == -1)
	{
		handle_error(100, "Error: Can't close fd");
	}
	return (0);
}
