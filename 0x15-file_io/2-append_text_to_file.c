#include "main.h"

/**
 * append_text_to_file - This appends text @ end of file.
 * @filenom: Pointer to the name of the file.
 * @text_cont: This is the string to add to the end of the file.
 *
 * Return: If the function fails or filenom is NULL - -1.
 *         If the file does not exist, the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filenom, char *text_cont)
{
	int u, x, pen = 0;

	if (filenom == NULL)
		return (-1);

	if (text_cont != NULL)
	{
		for (pen = 0; text_cont[pen];)
			pen++;
	}

	u = open(filenom, O_WRONLY | O_APPEND);
	x = write(u, text_cont, pen);

	if (u == -1 || x == -1)
		return (-1);

	close(u);

	return (1);
}
