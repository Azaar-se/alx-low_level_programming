#include "main.h"

/**
 * create_file - This creates a file.
 * @filenom: Pointer to the name of the file to create.
 * @text_cont: Pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filenom, char *text_cont)
{
	int fn, m, pen = 0;

	if (filenom == NULL)
		return (-1);

	if (text_cont != NULL)
	{
		for (pen = 0; text_cont[pen];)
			pen++;
	}

	fn = open(filenom, O_CREAT | O_RDWR | O_TRUNC, 0600);
	m = write(fn, text_cont, pen);

	if (fn == -1 || m == -1)
		return (-1);

	close(fn);

	return (1);
}
