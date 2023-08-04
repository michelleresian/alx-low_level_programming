#include "main.h"
/**
 *  _pow_recursion - a function that return x ** y
 *  @x: parameter of the function
 *  @y: parameter of the function
 *  Return: 0 always a success
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (x *  _pow_recursion(x, y - 1));
}
