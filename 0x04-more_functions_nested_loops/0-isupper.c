#include "main.h"

/**
 * _isupper - checks for the uppercase character
 * @c: int type uppercase
 *
 * Return: 0 or 1
 */


int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
