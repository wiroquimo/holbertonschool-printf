#include "main.h"

/**
 * print_char - print a character
 * @list: list of characters
 * Return: Will returns the amount of characters printed
 */

int print_char(va_list list)
{
	_write_char(va_arg(list, int));
	return (1);
}

/**
 * print_string - print a string
 * @list: list of arguments
 * Return: Will returns the amount of characters printed
 */

int print_string(va_list list)
{
	int index;
	char *string;

	string = va_arg(list, char *);
	if (string == NULL)
		string = "(null)";
	for (index = 0; string[index] != '\0'; index++)
		_write_char(string[index]);
	return (index);
}

/**
 * print_percent - print a percentage
 * @list: list of arguments
 * Return: Will returns the number of characters printed
 */

int print_percent(__attribute__((unused))va_list list)
{
	_write_char('%');
	return (1);
}
