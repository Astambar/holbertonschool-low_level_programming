#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	const char * init = "vagrant_virtual_machine";
	const char * command = "cd /\n sudo mkdir testons"; 
   system(command);
     strcat(init, command);
 
  printf("Aprés la concaténation = %s\n", init);
    return (0);
}
