#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, returns the number of characters written (1).
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c) {
    return write(STDOUT_FILENO, &c, 1);
}
