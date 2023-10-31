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

	int a, b;
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

	for (a = 0; s1[a] != '\0'; a++)
		concat[a] = s1[a];

	for (b = 0; s2[b] != '\0'; b++)
		concat[a + b] = s2[b];

	concat[a + b] = '\0';

	return (concat);
}
