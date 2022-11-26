#include "main.h"

int main(void)
{
	int i;
	char c[10] = "_putchar";

	for (i = 0; c[i] ; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
