#ifndef _MAIN_
#define _MAIN_

#include <stdlib.h>
#include <stdio.h>

int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
void _divid(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int _strlen(const char *s);
unsigned int binary_to_uint(const char *b);
int _putchar(char c);
void print_binary(unsigned long int n);

#endif /* _MAIN_ */