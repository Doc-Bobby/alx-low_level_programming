#include "main.h"

/**
 * _isalpha - checks if the character is alphabetic.
 * @c: the character to be checked.
 *
 * Return: 1 if the character is uppercase or lowercase,0 is otherwise.
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}
