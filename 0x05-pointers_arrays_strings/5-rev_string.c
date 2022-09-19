#include "main"
/**
 * rev_string - reverse the string
 * followed by a new line.
 * @s: pointer to string
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
