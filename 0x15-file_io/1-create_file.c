#include "main.h"
/**
 * create_file - create a new file
 * @filename: name of the file
 * @text_content: content the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, lw;

	if (filename == NULL || *filename == '\0')
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	lw = write(fd, text_content, strlen(text_content));
	if (lw < 0)
		return (-1);
	close(fd);
	return (1);
}
