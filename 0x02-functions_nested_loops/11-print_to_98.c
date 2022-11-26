#include "main.h"

void print_to_98(int n)
{
	int i;

	for (i = n; i <=98; i++)
	{
		if (i <10)
		{
			if (i != 0)
			{
				_putchar(' ');
				
			}
			else if (i < 0)
			{
				_putchar('-');
				_putchar(i + '0');

			}
			_putchar( i + '0');
		}
		else
		{
			_putchar((i /10) + '0');
			_putchar((i % 10) + '0');
		}
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		
	}
	putchar('\n');
}

