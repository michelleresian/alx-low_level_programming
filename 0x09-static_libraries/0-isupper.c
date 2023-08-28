#include "main.h"
/**
 * _isupper - function tht checks if  character is uppercase
 * @c: argument for the function
 * Return: 0 failure otherwise 1 is a success
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
