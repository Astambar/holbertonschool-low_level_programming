#include "main.h"

/**
 * main - condition positive or negative or 0
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{   
    char chaine[]="_putchar";
    // int size_chaine=sizeof(chaine) / sizeof(char);
    int i=0;
	
    
    while(chaine[i] != '\0'){
        _putchar(chaine[i]);
        i++;
    }
    _putchar('\n');
	return (0);

}
