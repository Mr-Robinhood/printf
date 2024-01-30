#ifndef MAIN_H
#define MAIN_H

/*
 * this is the main.h Header file.
 */
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list val);
int print_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *char);
int print_perc(void);

#endif/*MAIN.H*/
