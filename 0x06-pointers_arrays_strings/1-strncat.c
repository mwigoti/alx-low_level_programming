#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the string to be appended upon
 * @src: string to be appended to
 * @n: the number of bytes to be appended to
 * Return: a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
