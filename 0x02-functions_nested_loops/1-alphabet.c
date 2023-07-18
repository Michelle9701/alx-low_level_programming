#include <stdio.h>

/**
 * print_alphabet  - Make the alphabet
 *
 * Return: void
 */
void _putchar(char c) {
    putchar(c);
}

void print_alphabet(void) {
    for (char c = 'a'; c <= 'z'; c++) {
        _putchar(c);
    }
    _putchar('\n');
}

int main() {
    print_alphabet();
    return 0;
}    
