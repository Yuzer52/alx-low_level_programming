#include <unistd.h>

/**
 * putchar: writes the character
 * return: on success 1
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
