#include <unistd.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main()
{
	const char *message = "and that piece of art is useful
                        \" - Dora Korpar, 2015-10-19\n";
	ssize_t bytes_written = write(STDERR_FILENO, message, 15);
	return (bytes_written == 15) ? 0 : 1;
}
