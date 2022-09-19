#include "main.h"
/**
 * swap_int - swap the value of integers
 * @a: pointer to first int
 * @b: pointer to second int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
