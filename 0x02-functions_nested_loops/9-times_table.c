#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void times_table(void)
{
    int i = 0;
    while (i < 10)
    {
        int h = 9 * i;
        _putchar((h / 10) + 48);
		_putchar((h % 10) + 48);
        if(i != 9){
            _putchar(',');
        }
        
    }
}