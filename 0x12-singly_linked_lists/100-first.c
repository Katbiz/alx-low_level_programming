#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - This prints a whole sentence before
 * the function is then executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
