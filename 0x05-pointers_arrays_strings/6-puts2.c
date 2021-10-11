#include "main.h"
#include <string.h> 
/**
* _strlen - reset value pointer
* @s: pointer
*/
void puts2(char *str)
{
	int i, len, temp;  
    len = strlen(s);

	for (i = 0; i < len/2; i++)  
    {  if(i%2 == 0)
		{
		temp = s[i];  
        s[i] = s[len - i - 1];  
        s[len - i - 1] = temp; 
		}
 
    }  
printf("%s",s)
}
