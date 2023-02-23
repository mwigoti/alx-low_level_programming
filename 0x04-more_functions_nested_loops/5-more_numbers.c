#include "main.h"

/**
 * more_numbers - prints number 0 to 14 10 times
 * Return: no returns
 */

void more_numbers(void)
{
	int m, n;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
				_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
		_putchar('\n');
	}
}
