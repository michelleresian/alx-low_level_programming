#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name -  function that prints  name to the screen
 * @name:  parmeter for the function
 * @f: a pointer to the function
 * Return: a void function which return null
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
