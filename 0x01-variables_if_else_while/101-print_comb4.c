#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: '101-print_comb4.c'
 * Return: Always 0
 */
int main(void)
{
int one = '0';
int ten = '0';
int hun = '0';

for (hun = '0'; hun <= '9'; hun++)
{
	for (ten = '0'; ten <= '9'; ten++)
	{
		for (one = '0'; one <= '9'; one++)
		{
			if (!((one == ten) || (ten == hun) || (ten > one) || (hun > ten)))
			{
				putchar(hun);
				putchar(ten);
				putchar(one);
				if (!(one == '9' && hun == '7' && ten == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
