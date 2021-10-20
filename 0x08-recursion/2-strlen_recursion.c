#include "main.h"

/**
* _strlen_recursion - reset value pointer
*
* Return: Always 0.
* @s: pointer
*/

int _strlen_recursion(char *s)
{
		return (*s == '\0') ? 0 : (_strlen_recursion(s + 1) + 1);
}
