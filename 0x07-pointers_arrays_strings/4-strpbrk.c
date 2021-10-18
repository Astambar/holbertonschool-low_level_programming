#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *_strcat - reset value pointer
*
* Return: Always 0.
* @dest: pointer
* @src: pointer
*/
char *_strpbrk(char *s, char *accept)
{
    int i, j, pos, flag = 0;

    for (i = 0; s[i] != '\0'; i++)
	{
	}
    pos = i;
    for (i = 0; accept[i] != '\0'; i++)
    {
        for (j = 0; s[j] != '\0'; j++)
        {
            if (accept[i] == s[j])
            {
                if (j <= pos)
                {
                    pos = j;    
                    flag = 1;    
                }
            }
         }        
    }
	return (flag == 1) ? &s[pos] : NULL;
}
