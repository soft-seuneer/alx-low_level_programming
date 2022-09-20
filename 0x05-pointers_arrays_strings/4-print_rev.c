#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: pointer to string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
