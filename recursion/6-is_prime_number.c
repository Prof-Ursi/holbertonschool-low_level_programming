#include "main.h"

/**
  * is_prime_number - Returns if a number is prime
  * @n: the number to be checked
  *
  * Return: through prime_checker :
  * 1 for prime and 0 for composite
  */
int is_prime_number(int n)
{
	return (prime_checker(n, 1));
}

/**
  * prime_checker - Check if number is prime
  * @number: the number to be checked
  * @i: counter
  *
  * Return: 1 for prime or 0 composite
  */
int prime_checker(int number, int i)
{
	if (number <= 1)
		return (0);

	if (number % i == 0 && i > 1)
		return (0);

	if ((number / i) < i)
		return (1);

	return (prime_checker(number, i + 1));
}
