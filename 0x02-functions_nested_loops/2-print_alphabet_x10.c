#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
    int i = 0;
    while(i < 10)
    {
            int a = 'a';
    
    while (a <= 'z')
    {
        _putchar(a);
        a++;
    }
    _putchar('\n');
        i++;
    }
}