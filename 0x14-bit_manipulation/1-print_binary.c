#include "main.h"

/**
  * _divid - devides unit
  * @n: n to divid
  *
  * Return: devided iont
  */
void _divid(unsigned long int n)
{
	if (n < 1)
		return;

	_divid(n >> 1);
    
    _putchar(n & 1 ? '1' : '0');
}

/**
  * print_binary - prints number as binary
  * @n: the decimal numer
  *
  * Return: none
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_divid(n);
}
