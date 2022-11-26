#include "main.h"

void more_numbers(void)
{
	int i, j, x, z;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; i <= 14; j++)
		{
			if (j < 10)
			{
				x = j;
			}
			else
			{
				z = i / 10;
				x = i % 10;
				_putchar('0' + z);
			}
			_putchar('0' + x);
		}
		_putchar('\n');
	}
}
