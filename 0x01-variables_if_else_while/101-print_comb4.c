/*
 * File: 101-print_comb4.c
  */

#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main() {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            for (int k = j + 1; k < 10; k++) {
                putchar('0' + i);
                putchar('0' + j);
                putchar('0' + k);

                if (i < 7) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return 0;
}
