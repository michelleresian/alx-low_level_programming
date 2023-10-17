#include "main.h"

/**
 *_strncpy - Copies a string pointed to by src
 *           including the terminatiing null byte ('\0)
 *@dest: String destination
 *@src: String source to be copied
 *@n: Number of bytes copied
 *
 *Return: Concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int source;

	for (source = 0; src[source] != '\0' && source < n; source++)
	{
		dest[source] = src[source];
	}
	for ( ; source < n; source++)
	{
		dest[source] = '\0';
	}
	return (dest);
}
