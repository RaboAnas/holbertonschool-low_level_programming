#include "main.h"

/**
 * more_numbers - Imprime les nombres de 0 à 14, dix fois.
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar('1');
_putchar(j % 10 + '0');
}
else
{
_putchar(j + '0');
}
}
_putchar('\n');
}
}
