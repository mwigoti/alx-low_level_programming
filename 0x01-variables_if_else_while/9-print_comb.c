#include <stdio.h>
/**
 * main - Entry point
 * Description: '9-print_comb.c'
 * Return: Always 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(c + 48);
		if (c != 9)
		{
		putchar(',');
		putchar(' ');
		}
		c++;

	}
	putchar('\n');
	return (0);
}
