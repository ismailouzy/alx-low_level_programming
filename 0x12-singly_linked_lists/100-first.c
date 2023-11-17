#include<stdio.h>

void _const(void) __attribute__((constructor));


/**
 * _const - the constructor attribute that gets called before the main
 *
 */

void _const(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
