#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - print out characters
 * @filename: name of the file
 * @letters: letters to be printed
 *
 * Return: number of chachters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_ptr;
	char *buffer;
	ssize_t byte_read;
	ssize_t byte_written;

	if (filename == NULL)
	{
		return (0);
	}

	file_ptr = fopen(filename, "r");
	if (file_ptr == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file_ptr);
		return (-1);
	}
	byte_read = fread(buffer, sizeof(char), letters, file_ptr);
	byte_written = write(STDOUT_FILENO, buffer, byte_read);

	free(buffer);
	fclose(file_ptr);

	return (byte_written);
}
