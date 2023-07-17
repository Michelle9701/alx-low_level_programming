#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
void print_digit_combinations()
{
    for (int i = 0; i <= 9; i++)
    {
        for (int j = i + 1; j <= 9; j++)
       	{
            putchar('0' + i);
            putchar('0' + j);
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
}

int main() {
    print_digit_combinations();
    return 0;
}
