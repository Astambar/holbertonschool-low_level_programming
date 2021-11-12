#include <stdio.h>
void printFirstTime(void)__attribute__((constructor));
/**
 * printFirstTime - Prints a string before the
 *        main function is executed.
 */
void printFirstTime(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
