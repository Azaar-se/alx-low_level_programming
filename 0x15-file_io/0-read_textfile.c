#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text file &  print to standard output
 * @filenom: The text file to  be read
 * @let: The No. of letters to be read
 * Return: b: The actual No. of bytes read & printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filenom, size_t let)
{
	char *tuff;
	ssize_t fn;
	ssize_t m;
	ssize_t f;

	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	tuff = malloc(sizeof(char) * let);
	f = read(fn, tuff, let);
	m = write(STDOUT_FILENO, tuff, f);

	free(tuff);
	close(fn);
	return (m);
}
