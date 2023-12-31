#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: first pointer to an array
 * Return: (0) always a success
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
