#include "main.h"
#include "1-alphabet.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
    int a = 'a';
    
    while (a <= 'z')
    {
        _putchar(a);
        a++;
    }
    _putchar('\n');
}
