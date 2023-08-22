#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i, n;

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (i = n; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
