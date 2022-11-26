#include <stdio.h>


int main(void)
{
	int i, j;
	i = '0';
	j = '0';


	for (i = '0'; i <= '9'; i++)
	{
		
		for (j = '0'; j <= '9' ; j++)
		{
		
			if (!((i == j) || (i > j)))
			{
				putchar(i);
				putchar(j);
				if (!(j == '0' && i == '0'))
				{	
					putchar(',');
					putchar(' ');
				}
			}
		}
	printf("%i is i and %i is j", i, j); 
		
	}
	putchar('\n');
	return (0);
}
