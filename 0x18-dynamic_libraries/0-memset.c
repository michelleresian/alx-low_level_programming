#include "main.h"

/**
 * _memset - function that fills a particular value to an array
 * @s: parameter for the array to set the particular memory
 * @b: value to set to the area we want b to be
 * @n: size in bytes of area we want b to be
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
