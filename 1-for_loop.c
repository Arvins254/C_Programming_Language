#include <stdio.h>
/**
 * main - entry point
 * Add 30 and print result
 * reurn 0
 */
int main(void)
{
	int i;

	for (int i = 10; i < 1000; i = i + 30)
	{
		printf("%d ", i);
	}
	putchar ('\n');
	for (int i = 10; i < 1000; i = i + 100)
	{
		printf("%d ", i);
	}
	putchar ('\n');
	return (0);
}
