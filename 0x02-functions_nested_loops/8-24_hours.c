#include "main.h"

void jack_bauer(void)
{
	int tens, ones;

	for (tens = 0; tens <= 23; tens++)
	{
		for (ones = 0; ones <= 59; ones++)
		{
			_putchar((tens / 10) + '0');
			_putchar((tens % 10) + '0');
			_putchar(':');
			_putchar((ones / 10) + '0');
			_putchar((ones % 10) + '0');
			_putchar('\n');
		}
	}
}

