#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints a text a text according number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    lastd = n % 10; 

    if (% 10 > 5)
    {
	    printf("Last digit of %d is %d and is greater than 5\n", n, % 10);
    }
    else if (lastd == 0)
    {
	    printf("Last digit of %d is %d and is 0\n", n, % 10);
    }
    else if (lastd < 6 && % 10 != 0)
    {
	    printf("Last digit of %d is %d and is less than 6 and not 0\n", n, % 10);
    }
    return (0); 
}
