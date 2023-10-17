#include "main.h"

/**
* _memset - Fills  memory with a constant byte
* @s: string pointer to be filled with the constant char
* @b: constant to fill the memory
* @n: Number of bytes to be field
*
* Return: Pointer to the memory area @s
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
