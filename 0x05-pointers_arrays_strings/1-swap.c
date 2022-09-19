#include "main.h"
#include <stdio.h>

/**
 * Swap - swap the value of integers
 * @a: pointer to first int
 * @b: pointer to second int
 *
 * Return: void
 */

void int_swap(int *a)
void int_swap(int *b)
{
	int c;

	c = *a;
	*b = c;
	*a = *b;
}
