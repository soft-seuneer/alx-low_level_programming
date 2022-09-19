#include "main.h"
#include <stdio.h>

/**
 * Swap - swap the value of integers
 * @a: pointer to first int
 * @b: pointer to second int
 *
 * Return: void
 */

void Swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
