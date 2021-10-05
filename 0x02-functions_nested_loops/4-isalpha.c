#include "main.h"
/**
 * _isalpha - check the code
 * @a: - letter
 * Return: Always 0.
 */
int _isalpha(int a)
{
	return ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'));
}
