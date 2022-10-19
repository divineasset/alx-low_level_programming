#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: X10 a-z
 */
void print_alphabet_x10(void)
{
	int a, ka;

	for (a = 0; a <= 10; a++)
	{
		for (ka = 'a'; ka <= 'z'; ka++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}

}
