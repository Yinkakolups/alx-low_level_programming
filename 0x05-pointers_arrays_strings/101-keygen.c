#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{

		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		c = c + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
