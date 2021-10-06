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

print_t func[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_integer},
{"i", print_integer},
{"b", print_binary},
{"u", print_unsigned_integer},
{"o", print_octal},
{"x", print_lowerHex},
{"X", print_upperHex},
{"r", print_rev_string},
{"R", print_print_rot13},
{"p", print_pointer}
}; 

va_list list;
 if (format == NULL)
 return (-1);

va_start(list, format);
print_c = printer_func(format, func, list);
va_end(list);
return (print_c);
}
