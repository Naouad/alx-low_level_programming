#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks whether a string is palindrome or not
 * @s: The string to be checked
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len <= 1)
		return (1);

	return (_palindrome_helper(s, len));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to calculate its length
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * _palindrome_helper - checks if a string is a palindrome
 * @s: string to be checked
 * @len: length of the string
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int _palindrome_helper(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s != s[len - 1])
		return (0);
	else
		return (_palindrome_helper(s + 1, len - 2));
}
