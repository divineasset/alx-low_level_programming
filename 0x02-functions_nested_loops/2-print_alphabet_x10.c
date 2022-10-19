#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: X10 a-z
 */
void print_alphabet_x10(void)
{
	int a, k;

	for (a = 0; a <= 10; a++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}

}
