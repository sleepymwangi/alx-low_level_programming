#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: person's name
 * @f: pointer to the function
 * Return: void succesion
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);

}
