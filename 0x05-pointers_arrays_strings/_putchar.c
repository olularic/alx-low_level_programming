#include <unistd.h>
/**
* _putchar.c - writes character c to stdout
* &c: char to be printed
* Return: on success 1
*/
int _purchar(char c)
{
return (write(1, &c, 1));
}
