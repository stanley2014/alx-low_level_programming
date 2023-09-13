#include "main.h"

/**
 * putchar -  prints _putchar, followed by a new line.
 *
 * Return: Always 0
 */
int main() {
    char message[] = "_putchar\n";
    write(1, message, sizeof(message) - 1);
    return 0;
}
