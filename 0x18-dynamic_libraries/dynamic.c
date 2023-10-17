#include <stdio.h>

/**
* _strlen - computes the length of a string
* @str: Pointer to the inpute string
*
* Return: The length of the string
*/
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
