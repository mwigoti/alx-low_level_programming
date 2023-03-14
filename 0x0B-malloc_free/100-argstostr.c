#include "main.h"
#include <stdlib.h>

/**
 * argstostr - entry point
 * @ac: input
 * @av:pointer
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, e = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			e++;
	}
	e += ac;

	ptr = malloc(sizeof(char) * e + 1);

	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			ptr[c] = av[a][b];
			c++;
		}
		if (ptr[c] == '\0')
		{
			ptr[c++] = '\n';
		}
	}
	return (ptr);
}
