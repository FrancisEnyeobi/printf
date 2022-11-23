#include "main.h"
/**
 * print_bigs - Non printable characters
 * (0 < ASCII value < 32 0r >= 127) are printed
 * this way: \x, followed by the ASCII code value
 * in hexadecimal (uppercase - always 2 characters)
 * @l: va_list arguments from _pintf
 * @f: pointer to the struct flags that determines if a flag
 * is passed to printf
 * Return: number of char printed
 */
int print_bigS(va_list l, flags_t f)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		return (_puts("(null)"));
	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))

		{
			_puts("\\x");
			count += 2;
			res = convert(s[i], 16, 0);
			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}
/**
 * print_rev - prints a string i reverse
 * @l: argument from _printf
 * @f:pointer to the struct flags that determines if
 * a flag is passed to _printf
 * Return: length of printed string
 */
int print_rev(va_list l, flags_t *f);
{
	int i = 0, j;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		s = "(null)";
	while (s[i])
		i++;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	return (i);
}

/**
