#include "main.h"
/**
 * print_triangle -  a function that prints a triangle, followed by a new line
 * @size: integar type
 * Return: nothing
 */

void print_triangle(int size)
{

	int i, ii;

	while (i <= size && size > 0)
	{
		ii = 0;

		while (ii < size - 1)
		{
			_putchar (' ');
			ii++;
		}
		ii = 0;

		while (ii < 1)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
	_putchar('\n');
}

