#include "main.h"

/**
 * string_toupper - changes all lowercase to upper
 * @str: string to be changed
 * Return: apointer to changed string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}

