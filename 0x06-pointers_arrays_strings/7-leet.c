#include "main.h"
#include <stdio.h>

char *leet(char *s);

int main(void)
{
	char s[] = "hello world";
	char *p;

	p = leet(s);
	printf("%s\n", p);
	return (0);
}

char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
	}
	p = s;
	return (p);
}
