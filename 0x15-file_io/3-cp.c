#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *filenom);
void close_file(int cf);

/**
 * create_buffer - This will allocate 1024 bytes for a buffer.
 * @filenom: This is the name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *filenom)
{
	char *baffa;

	baffa = malloc(sizeof(char) * 1024);

	if (baffa == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filenom);
		exit(99);
	}

	return (baffa);
}

/**
 * close_file - Closes file descriptors.
 * @cf: The file descriptor to be closed.
 */
void close_file(int cf)
{i
	int x;

	x = close(cf);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close cf %d\n", cf);
		exit(100);
	}
}

/**
 * main - This copies the contents of a file to another file.
 * @argc: The No. of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Descriptions: If the arg count is wrong - exit code 97.
 * If file_frm does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_frm cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int frm, to, f, m;
	char *baffa;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_frm file_to\n");
		exit(97);
	}

	baffa = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	f = read(frm, baffa, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || f == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read frm file %s\n", argv[1]);
			free(baffa);
			exit(98);
		}

		m = write(to, baffa, f);
		if (to == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(baffa);
			exit(99);
		}

		f = read(frm, baffa, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (f > 0);

	free(baffa);
	close_file(frm);
	close_file(to);

	return (0);
}
