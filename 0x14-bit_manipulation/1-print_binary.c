#include "main.h"

/**
  * _divide - devides unit
  * @void _divid(unsigned long int number)
: uint
  *
  * Return: devided iont
  */
void _divid(unsigned long int number)
{
	if (number < 1)
		return;

	_divid(number >> 1);

    _putchar(number & 1 ? '1' : '0');
}

/**
  * print_binary - prints number as binary
  * @number: the decimal numer
  *
  * Return: none
  */
void print_binary(unsigned long int number)
{
	if (number == 0)
	{
		_putchar('0');
		return;
	}

	_divid(number);
}