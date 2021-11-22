#include "main.h"
/**
 * read_textfile - reads a text file and prints (standard output).
 * @filename: file name
 * @letters: lenbuffer
 *
 * Return: ssize_t count character print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lr, lw;
	char *content;

	if (filename == NULL || *filename == '\0')
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	content = malloc(sizeof(char) * letters);
	if (content == NULL)
		return (0);
	lr = read(fd, content, letters);
	/* STDOUT_FILENO = Standard output = 1 */
	lw = write(STDOUT_FILENO, content, lr);
	close(fd);
	free(content);
	return (lw);
}
