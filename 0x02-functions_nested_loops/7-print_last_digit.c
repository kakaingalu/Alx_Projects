#include "main.h"

int print_last_digit(int i)
{
	i = i % 10;

	if (i < 0)
	{
		i = i * -1;
	}
	_putchar('0' + i);
	return (i);
}
