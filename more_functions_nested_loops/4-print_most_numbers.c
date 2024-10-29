#include "main.h"

/**
*print_most_numbers - Prints the numbers from 0 to 9, excluding 2 and 4.
*/

void print_most_numbers(void)
{
int A;
for (A = 0 ; A <= 9 ; A++)
{
if (A != 2 && A != 4)
{
_putchar(A + '0');
}
_putchar('\n');
}
}
