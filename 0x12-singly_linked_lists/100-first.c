#include <stdio.h>
void printFirstTime(void)__attribute__((constructor));
/**
 * printFirstTime - executer une fonction avant le main
 */
void printFirstTime(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
