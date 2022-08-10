#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_str(va_list args);
int _puts(char *str);
int print_number(int n);
int print_int(va_list args);
int print_d(int var);
int print_dec(va_list args);
#endif
