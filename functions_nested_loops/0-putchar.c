#include "main.h"
#include <unistd.h>  // For the write function

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c) {
    return write(1, &c, 1);  // Write the character to stdout
}

int main(void) {
    _putchar('_');  // Print '_'
    _putchar('p');  // Print 'p'
    _putchar('u');  // Print 'u'
    _putchar('t');  // Print 't'
    _putchar('c');  // Print 'c'
    _putchar('h');  // Print 'h'
    _putchar('a');  // Print 'a'
    _putchar('r');  // Print 'r'
    _putchar('\n'); // Print a new line

    return 0; // Indicate successful termination
}
