#ifndef MAIN_H
#define MAIN_H

void multiply_numbers(char *num1, char *num2);
int is_valid_number(char *str);
int _putchar(char c);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void *malloc_checked(unsigned int b);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/**
 * multiply_numbers - function that mutiply num
 * @num1: arg1
 * @num2: arg2
 * Return: 98
 */
void multiply_numbers(char *num1, char *num2)
{
	int len1, len2, size;
	int i, j, carry, n1;
	int _index, *result;

	if (!is_valid_number(num1) || !is_valid_number(num2))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	len1 = 0, len2 = 0;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	size = len1 + len2;
	result = malloc(sizeof(int) * size);

	if (result == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	for (i = 0; i < size; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			int n2 = num2[j] - '0';
			int sum = (n1 * n2) + result[i + j + 1] + carry;

			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		result[i] += carry;
	}
	_index = 0;

	while (result[_index] == 0 && _index < size - 1)
		_index++;
	for (i = _index; i < size; i++)
		_putchar(result[i] + '0');
	_putchar('\n');
	free(result);
}

#endif
