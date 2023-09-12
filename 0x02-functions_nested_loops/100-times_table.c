#include "main.h"

/**
 * print_row - prints a single row of the times table
 * @n: the number for the row
 * @max: the maximum number for the table
 */
void print_row(int n, int max)
{
    int i, product;

    for (i = 0; i <= max; i++)
    {
        product = n * i;
        if (i == 0)
            _putchar(product + '0');
        else
        {
            _putchar(',');
            _putchar(' ');
            if (product < 10)
                _putchar(' ');
            if (product >= 10)
                _putchar((product / 10) + '0');
            _putchar((product % 10) + '0');
        }
    }
    _putchar('\n');
}

/**
 * times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void times_table(int n)
{
    int i;

    if (n >= 0 && n <= 15)
    {
        for (i = 0; i <= n; i++)
        {
            print_row(i, n);
        }
    }
}
