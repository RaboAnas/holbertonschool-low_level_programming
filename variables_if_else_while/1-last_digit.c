!/bin/bash
echo {a..z}{a..z} | tr ' ' '\n' | grep -v oo
10:10
#!/bin/bash
printf "%.2f\n" "$NUM"
10:10
#!/bin/bash
printf "%X\n" "$DECIMAL"


Desire Gael Ndong Nnang
  2:11 PM
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints "with proper grammar, but the outcome
 * is a piece of art," followed by a new line to the standard output.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("with proper grammar, but the outcome is a piece of art,\n");
return (0);
}
New


Desire Gael Ndong Nnang
  2:19 PM
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Generates a random number, calculates its last digit,
 *              and prints whether the last digit is greater than 5,
 *              is 0, or is less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
printf("Last digit of %d is %d ", n, last_digit);
if (last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
