#include "main.h"
#include <stdio.h>

/**
 * print_rev - imprime en reversa
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}
