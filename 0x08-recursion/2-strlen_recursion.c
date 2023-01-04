#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _stren_recursion(++s));
}
