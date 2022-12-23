#include "main.h"

/**
 * _strcmp - compares two strings values
 * @s1: str 1
 * @s2: str 2
 * Return: the differences in str1 and str2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] = s2[i]);
		}
		i++;
	}
	return (0);
}

