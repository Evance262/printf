#include "main.h"

/**
 * _printf -produces output according to a format.
 * @format: a character string
 * 
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
int print_c;

identifierStruct func[] = {
{"c", print_char},
{"s", print_str},
{"%", print_percent},
{"d", print_int},
{"i", print_int},
{"b", print_binary},
{"u", print_unsigned},
{"o", print_oct},
{"x", print_hex},
{"X", print_HEX},
{NULL, NULL},
}; 

va_list list;
 if (format == NULL)
 return (-1);

va_start(list, format);
print_c = printer_func(format, func, list);
va_end(list);
return (print_c);
}
