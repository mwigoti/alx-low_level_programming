#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print base 10 numbers'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (int n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
