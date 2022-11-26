#include <stdio.h>


int main(void)
{
	int i, j;

	
	for(i = 'a'; i != 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j != 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
