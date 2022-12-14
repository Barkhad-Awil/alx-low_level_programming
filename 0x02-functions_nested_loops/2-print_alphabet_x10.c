#include "main.h"

/**
 * main - Entry point
 * print 10x_alphabet - a function that prints 10 times alphabet
 *
 * return:10x a-z
 */

void print_alphabet_x10(void)
{
	int count;
	char n;

	count = 0;
	while (count < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
		_putchar(n);
		}
	_putchar('\n');
	count++;
	}
}



















