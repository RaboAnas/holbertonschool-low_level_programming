#include <stdio.h>

/**
 * print_alphabet - imprime l'alphabet en minuscules, suivi d'une nouvelle ligne.
 */
void print_alphabet(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
		_putchar(lettre);
	_putchar('\n');
}
