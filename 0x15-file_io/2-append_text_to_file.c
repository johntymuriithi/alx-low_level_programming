#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - main function
 * @filename: file to be created
 * @text_content: content
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wt, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	file = open(filename, O_WRONLY, O_APPEND);
	wt = write(file, text_content, len);
	if (file == -1 || wt == -1)
	{
		return (-1);
	}

	return (1);
}

