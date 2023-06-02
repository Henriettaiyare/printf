#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print - function that produces output according to format
 * @format: character string
 * @c: character
 * @%: modulo
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list types;

	if (format == NULL)

		return (-1);
	va_start(types, format);
	{
		while (*format)
			if (*format == '%')
			{
				if ((*format + 1) == 'c')
					putchar(types);
			}
			else if ((*format + 1) == 's')
			{
				while (types)
				{
					_putchar(types[i]);
					i++;
					}
			}
			else if ((*format + 1) == 'i')
			{
				_putchar(types + '0');
			}
			else if  ((*format + 1) == 'd')
			{
				_putchar(types + '0');
			}
		_putchar(*format);
		*format++;
	}
	va_end(types);
	return (0);
}
