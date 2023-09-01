#include <stdio.h>
#include "main.h"

/**
*_putchar - writes the character c to stdout
*@c: Ther character to print
*
*Return: On succes 1.
*On error, -1 isreturned and errno is set appropriately
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
