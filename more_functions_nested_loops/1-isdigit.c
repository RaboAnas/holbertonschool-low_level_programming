#include "main.h"
/**
* _isdigit - Checks if a character is a digit (0 through 9).
* @c: the character to check, given as an integer (ASCII code).
*
* Return: 1 if c is a digit, 0 otherwise.
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
