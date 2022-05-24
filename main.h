#ifndef PROTOTYPES_H
#define PROTOTYPES_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct specifier - Structure type defining _printf.
 *
 * @specifier: a character representing the data type.
 * @f: fonction pointer to a functions that prints a data type.
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list ap);
} spe;
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(const char *str);
int print_s(va_list ap);
int print_c(va_list ap);
int print_int(va_list ap);
int print_percent(va_list ap);
int convert_binary(va_list ap);
#endif
