#include "main.h"
/**
 * _islower - check for lowercase letters
 * @c: input
 * Return: 1 if c is lowercase
 * 0 if c is anthing else.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
