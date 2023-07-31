#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 8; j++)
       	{
            for (int k = j + 1; k <= 9; k++)
	    {
                putchar('0' + i);
                putchar('0' + j);
                putchar('0' + k);
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}
