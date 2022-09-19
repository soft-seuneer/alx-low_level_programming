#include "main.h"
/**
 * _puts - prints string followed by newline
 * @str: pointer to string
 * Return: void
 */


void _puts(char *str)
{
int i = 0;
	while (str[i])
{
	_putchar(*str);
	i++;
}
_putchar('\n');
}
