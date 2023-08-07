#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * create_file - function
 * @filename: filename to be created
 * @text_content: content file
 *
 * Return: 1 or negate
 */
int create_file(const char *filename, char *text_content)
{
	int file, wt, count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(file, text_content, count);

	if (file == -1 || wt == -1)
	{
		return (-1);
	}
	close(file);

	return (1);
}
