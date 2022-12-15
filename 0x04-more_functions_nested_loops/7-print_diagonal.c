#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 *@n: input the number of times '\' should be printed
 * Return: a diagonal
 */

void print_diagonal(int n)
{
	int i, b;

	if (n > 0)
	{
		for (i = 1; i < n; i++)
		{
			for (b = 1; b < i; b++)
			{
				_putchar (' ');
			}

			_putchar (92);
			_putchar ('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
