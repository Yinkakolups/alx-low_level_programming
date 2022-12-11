#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print lowercase alphabet in reverse order
 * Return: always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
