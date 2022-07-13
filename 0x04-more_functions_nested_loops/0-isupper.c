#include "main.h"

/**
* _isupper - a function to check uppercase character
* @c:input
* Return: 1 if c is uppercas, 0 otherwise
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
