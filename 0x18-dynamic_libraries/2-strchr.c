#include "main.h"
#include <stddef.h>

/**
 *_strchr - Locates a character in a string.
 *@s: String where a char is to be located.
 *@c: Char to be located in a @s string.
 *
 *Return: Pointer to the memory area @s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= 0; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
