#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - functoin that print all base on specification
 * @format: to num of args
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		if (i > 0 && (format[i - 1] == 'c' || format[i - 1] == 'i' ||
					format[i - 1] == 'f' || format[i - 1] == 's'))
			printf(", ");

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str != NULL)
					printf("%s", str);
				else
					printf("(nil)");
				break;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
