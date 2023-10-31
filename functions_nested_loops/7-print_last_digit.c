#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: data from user.
 *
 * Return: 0.
 */

int print_last_digit(int n)
{
	/**
	 * Primero hay que asegurarse que el número no sea negativo
	 * utilizando este operador ternario
	 * si n es menor que 0 se ejecutará la expresión -n y cambiará
	 * su signo, tomando el valor absoluto y el resultado se asignará 
	 * de nuevo a la variable
	 * condición ? valor_si_cierto : valor_si_falso;
	 */

	n = (n < 0) ? -n : n;

	while (n >= 10)
	{
		n / 10;
	}

	_putchar(n + '0');
}
