#include "holberton.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @x: same number as n
 * @v: number that iterates from 1 to n
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sqrt2(int x, int v)
{
	if (v * v == x)
		return (v);
	else if (v * v > x)
		return (-1);
	return (sqrt2(x, v + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
