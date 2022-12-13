#include <main.h>

/**
 *
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	char print_putchar[] = "_putchar";

	printf("%\n", print_putchar);
	putchar(print_putchar[]);
	return (0);
}
