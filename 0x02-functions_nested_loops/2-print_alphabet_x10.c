#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: X10 a-z
 */
void print_alphabet_x10(void)
{
	int a, ka;

	ka = 0;

	while (ka < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{

			_putchar(a);
		}
		ka++;
		_putchar('\n');

	}

}
