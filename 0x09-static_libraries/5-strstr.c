#include <stdio.h>
#include "main.h"

/**
 * _strstr - strstr function
 *
 * @haystack: haystack parametre
 * @needle: needle parametre
 *
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *a = haystack, *b = needle;

		while (*a != '\0' && *b != '\0' && *a == *b)
		{
			a++;
			b++;
		}

		if (*b == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (0);
}
