#include "holberton.h"

/**
 * factorial - gets factorial of n
 * @no: integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int no)
{
	if (on < 0)
		return (-1);
	if (no == 0)
		return (1);
	return (no * factorial(no - 1));
}
