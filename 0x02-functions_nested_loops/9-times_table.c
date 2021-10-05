#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void times_table(void)
{
    int i = 0 ,j =0;

    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
                int h = j * i;

                if(h<10)
                {
                    _putchar(h+48);
                    if((i != 0 || i != 1)&& j != 9){
                        _putchar(',');
                        _putchar(' ');
                        _putchar(' ');
                    }
                
                }
                else
                {
                    _putchar((h / 10) + 48);
                    _putchar((h % 10) + 48);
                    if(j != 9 ){
                    _putchar(',');
                    _putchar(' ');
                }

                }
                j++; 
        }

        i++;
            _putchar('\n');
        }
}
