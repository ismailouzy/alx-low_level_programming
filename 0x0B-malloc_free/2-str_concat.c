#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function concatenates two strings
 *
 * @s1: s1 parametre
 * @s2: s2 parametre
 *
 * Return: success.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, a = 0, b = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;
	while (s2[b])
		b++;

	concat = (char *)malloc((a + b + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		concat[a + j] = s2[j];

	concat[a + b] = '\0';

	return (concat);
}
