#include "main.h"

/**
 * more_numbers -> printing more numbers
 */
void more_numbers(void)
{
	int x,y;

	for (x = 0; X < 10; X++)
	{
		for (y = 0; y < 15; y++)
		{
			_putchar((y/10) + '0');
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
		}
	}
}
