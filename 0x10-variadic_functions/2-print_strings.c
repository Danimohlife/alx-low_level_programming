#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - func to print string
 *  @separator: space
 *  @n: const aurg
 *  Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}

	if (separator != NULL && i < n - 1)
		printf("%s", separator);

	va_end(args);
	printf("\n");
}
