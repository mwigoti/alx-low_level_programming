#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print numbers'
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
