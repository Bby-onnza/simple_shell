#include "main.h"

/**
 * read_line - Read the input string.
 *
 * @i_eof: Return value of getline function
 * Return: Input string
 */
char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	*i_eof = getline(&input, &bufsize, stdin);

	return (input);
}
