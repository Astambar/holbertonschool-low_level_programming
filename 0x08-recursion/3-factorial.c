#include "main.h"

/**
* _puts_recursion - reset value pointer
*
* Return: Always 0.
* @s: pointer
*/

int factorial(int n)
{
	if(n < 0)
	{
		return (-1);
	}
  if(n==0)  
    return(1);

  return(n*factorial(n-1));
}
