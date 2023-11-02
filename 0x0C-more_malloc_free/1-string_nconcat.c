#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function concatenates two strings
 *
 * @s1: s1 parametre
 * @s2: s2 parametre
 * @n: n parametre
 *
 * Return: success.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;

	unsigned int i, j, a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;
	while (s2[b])
		b++;

	if (n >= b)
		n = b;

	concat = (char *)malloc(a + n + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[a + j] = s2[j];

	concat[a + n] = '\0';

	return (concat);
}
