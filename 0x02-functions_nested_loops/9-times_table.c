#include "main.h"

/**
 * times_table - prints the times table of 9
 */
void times_table(void)
{
	int result, row,col;

	for (row = 0, row <= 9; row++)
	{
		_putchar('0');
		for (col = 1, col <= 9; col++)
		{
			_putchar(',');
			_putchar(' ');
			result = row * col;
			
			if (result <= 9 )
			       _putchar(' ');
			else
				_putchar((result / 10) + '0')
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
