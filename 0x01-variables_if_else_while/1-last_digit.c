#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - condition positive or negative or 0
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    
    if(n > 5)
    {
        printf("Last digit of %d and is greater than 5 \n", n);
    }
    else if(n == 0)
    {
        printf("Last digit of %d and is %d \n", n , n % 10);
    }
    else if(n < 6)
    {
        printf("Last digit of %d and is %d less than 6 and not 0 \n", n , n % 10);
    
    }

	return (0);
}