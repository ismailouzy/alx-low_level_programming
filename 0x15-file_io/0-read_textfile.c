#include <stdio.h>
#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX stdout
 *
 * @filename: filename parametre
 * @letters: letters parametre
 *
 * Return: Success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[letters];
	ssize_t br, fd;
	ssize_t bw;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);


	br = read(fd, buff, letters);

	if (br == -1)
	{
		close(fd);
		return (0);
	}

	bw = write(STDOUT_FILENO, buff, br);
	close(fd);

	if (bw != br)
		return (0);


	return (br);
}
