#include "main.h"
/**
 * append_text_to_file - append content a new file
 * @filename: name of the file
 * @text_content: content the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, lw;

	if (filename == NULL || *filename == '\0')
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	lw = write(fd, text_content, strlen(text_content));
	if (lw < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
