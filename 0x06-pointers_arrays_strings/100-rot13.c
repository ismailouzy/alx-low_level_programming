#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to the string
 *
 * Return: a pointer to an encoded string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			{
				s[i] -= 13;
			}
			else
				s[i] += 13;
			i++;
		}
		i++;
	}

	return (s);
}
