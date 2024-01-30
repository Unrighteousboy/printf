#include "main.h"
#include <stdarg.h>
/**
 * _printf - print anything
 * @format: parameter
 * Return: the character to be printed
 */
int _printf(const char *format, ...)
{
	int char_size = 0;

	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	for (; *format; format++)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			char_size++;
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			else if (*format == '%')
			{
				write(1, format, 1);
				char_size++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);
				write(1, &c, 1);
				char_size++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				write(1, str, _strlen(str));
				char_size += _strlen(str);
			}
		}
	}
	return (char_size);
}
