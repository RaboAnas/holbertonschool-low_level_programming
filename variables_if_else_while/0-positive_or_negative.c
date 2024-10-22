#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));  // Initializes random number generator
    n = rand() - RAND_MAX / 2;  // Assigns a random number to n

    printf("%d ", n);  // Print the number

    if (n > 0)
    {
        printf("is positive\n");  // n is positive
    }
    else if (n == 0)
    {
        printf("is zero\n");  // n is zero
    }
    else
    {
        printf("is negative\n");  // n is negative
    }

    return (0);
}
