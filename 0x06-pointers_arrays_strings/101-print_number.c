#include "main.c"
#include <stdio.h>

/**
 * print_number - print numbers chars
 * @n: inter params
 * Return: 0
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
