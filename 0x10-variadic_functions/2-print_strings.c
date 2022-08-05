#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints all the given strings.
 * @separator: define character to separate the strings.
 * @n: number of springs to be printed
 * Return: a string with strings.
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argument;
	char *s;

	va_start(arguments, n);

	for (i = 1; i < n; i++)
	{
		s = va_arg(arguments
				, char *);
		if (s)
			printf("%s", s);

		else
			printf("(nil)");

		if (seperator && i < n)
			printf("%s", seperator);
		else
		{
			;
		}
	}
	printf("\n");
	va_end(arguments);
}
