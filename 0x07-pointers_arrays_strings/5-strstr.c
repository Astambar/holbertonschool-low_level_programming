#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *_strstr - reset value pointer
*
* Return: Always 0.
* @haystack: pointer
* @needle: pointer
*/
char *_strstr(char *haystack, char *needle)
{
    const char *a;
    const char *b;

    b = needle;

    if (*b == 0) {
        return (char *) haystack;
    }

    for ( ; *haystack != 0; haystack++)
	{
        if (*haystack != *b)
		{
            continue;
        }
        a = haystack;
        while (*a++ == *b++)
		{
            if (*b == 0) 
			{
                return (char *) haystack;
            }
			
        }
        b = needle;
    }

    return NULL;
}
