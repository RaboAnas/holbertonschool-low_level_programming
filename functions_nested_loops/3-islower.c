#include "main.h"
/**
 *_islower - Vérifie si un caractère est en minuscul
 * @c: Le caractère à vérif
 *
 * Retourne 1 si le caractère est en minuscule, 0 sinon
 */
int _islower(int c)
{
if (c >= 'a')
{
if (c <= 'z')
{
return (1);
}
}
return (0);
}
