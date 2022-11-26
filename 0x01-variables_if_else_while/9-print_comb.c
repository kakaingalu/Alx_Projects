#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{

		putchar('0' + i);
		if (i == 9)
		{
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');	
	}
	return (0);
}	
