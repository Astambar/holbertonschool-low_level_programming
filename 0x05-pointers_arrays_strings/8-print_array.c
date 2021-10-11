#include "main.h"
#include <string.h> 
#include <stdio.h>
/**
* _strlen - reset value pointer
* @s: pointer
*/
void print_array(int *a, int n)
{
	int i;
	for ( i =  0 ; i < n; i++)
	{	
		if(i != 0)
		{
			printf(", ");
		}
		printf("%d",a[i]);
		
	}
}
