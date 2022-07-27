#include <stdio.h>

/**
* print_times_table - prints n times table,
* starting with 0.
* @n: the time table number to print to.
*
* Return: nothing.
*/
void print_times_table(int n)
{
	int i, j, mul;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				printf("%f %d", 2.5, mul);
				if (j != n)
					printf(", ");
			}
			printf("\n");
		}
	}
}
