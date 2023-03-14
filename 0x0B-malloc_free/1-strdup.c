#include "main.h"

#include <stdio.h>

#include <stdlib.h>

/**
 * _strdup - entry point
 *
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *me;

	int a, b = 0;

	if (str == NULL)
		return (NULL);

	a = 0;

	while (str[a] != '\0')
		a++;

	me = malloc(sizeof(char) * (a + 1));

	if (me == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		me[b] = str[b];

	return (me);
}
