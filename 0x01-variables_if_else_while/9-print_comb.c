#include <stdio.h>
/**
 * main - Entry point
 * Description: '9-print_comb.c'
 *Return: Always 0
 */
int main(void)
{
	int n;

	for (int n = 48; n < 58; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
