#ifndef MAIN_H
#define MAIN_H


/**
 * File: MAIN_H - header gile containing the prototypes os all fumctions
 *
 * Desc: Header file for 0x14-bits_manipulation project
 * @c: param for _putchar
 * _putchar - to print chars
 * Return: int
 */

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* #ifndef MAIN_H */
