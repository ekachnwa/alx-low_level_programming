#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts stri to an integer
 * @s: string converted
 * Return: int converted from str
 */
int _atoi(char *s)
{
	int i, d, n, l, f, digt;

	i = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	digt = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digt = s[i] - '0';
			if (d % 2)
				digt = -digt;
			n = n * 10 + digt;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, numb, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		numb = _atoi(argv[k]);
		if (numb >= 0)
		{
			sum += numb;
		}
	}

	printf("%d\n", sum);
	return (0);
}
