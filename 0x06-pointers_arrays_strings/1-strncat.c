#include "main.h"
/**
 * _strncpy - two words
 * @dest : pointer to char params
 * @src : pointer to char params
 * @n : int params
 * Return: *dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
