#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of argument passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list p;
	int i = 0, a = 0;
	char *str;

	while (format && format[i])
	{
	va_start(p, format);
	while (format[i])
	{
		a = 1;
		switch (format[i++])
		{

		case 'c':
			printf("%c", va_arg(p, int));
			break;
		case 'i':
			printf("%i", va_arg(p, int));
			break;
		case 'f':
			printf("%f", va_arg(p, double));
			break;
		case 's':
			str = va_arg(p, char *);
			if ('str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			a = 0;
			break;
		}

		if (format[i] && a == 1)
		printf(", ");
	}
	}
	printf("\n");
	va_end(p);
}
