#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("   +--+--+-123xyz");
    printf("%d\n", nb);
    nb = _atoi("abc");
    printf("%d\n", nb);
    nb = _atoi("--2147483647");
    printf("%d\n", nb);
    nb = _atoi("-2147483648");
    printf("%d\n", nb);
    nb = _atoi("++1-2");
    printf("%d\n", nb);
    return (0);
}

