#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 1 if strings are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	int pos1 = 0, pos2 = 0, star = -1, match;

	while (s1[pos1] != '\0')
	{
		if (s2[pos2] == '*')
		{
			star = pos2++;
			match = pos1;
		}
		else if (s1[pos1] == s2[pos2] || s2[pos2] == '?')
		{
			pos1++;
			pos2++;
		}
		else if (star != -1)
		{
			pos2 = star + 1;
			pos1 = ++match;
		}
		else
		{
			return (0);
		}
	}

	while (s2[pos2] == '*')
	{
		pos2++;
	}

	return (s2[pos2] == '\0');
}
