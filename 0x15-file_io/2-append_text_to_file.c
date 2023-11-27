#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file -  append a text file
 *
 * @filename: filename parametre
 * @text_content: text_content parametre
 *
 * Return: Success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bww, br = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[br] != '\0')
			br++;

		bww = write(fd, text_content, br);
		if (bww != br)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
