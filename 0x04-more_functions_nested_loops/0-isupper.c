#include "main.h"
/**
 * _isupper - check if alphabet is uppercase
 * @c: input character
 * Return: 1 in uppercase character and zero if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
