#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints everything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int j = 0;
	char *string, *sepr = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sepr, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sepr, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sepr, va_arg(list, double));
					break;
				case 's':
					string = va_arg(list, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", sepr, string);
					break;
				default:
					j++;
					continue;
			}
			sepr = ", ";
			j++;
		}
	}
}

