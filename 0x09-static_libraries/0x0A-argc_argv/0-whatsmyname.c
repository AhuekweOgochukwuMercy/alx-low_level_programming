#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function with two arguments
 * @argc: int type argument
 * @argv: char type pointer array argument
 *
 * Description: prints all arguments it recieves
 * Return: void
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
