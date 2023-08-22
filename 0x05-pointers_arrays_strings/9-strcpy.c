#include "main.h"

/**
 * _strcpy - Copies the string pointed to by
 * src to the buffer pointed to by dest.
 *
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
