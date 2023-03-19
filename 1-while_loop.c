#include <stdio.h>
/**
 * main - Entry point
 * Return
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		for (int i = 0; i < 10; i++)
		{
			printf("The value of %d is less than the value of 10\n", i);
		}
		break;
	}

	putchar('\n');
	return (0);
}
