/* C practice
 * Kevin Nguyen
 * 08/30/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 4 Exercises
 */

/* Q: Ch4, Ex9
 *
 * Show the output produced by each of the following program fragments.
 * Assume that i, j, and k are int variables.
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 7; j = 8;
    i *= j + 1;
    printf("(a) %d %d\n", i, j);

    i = j = k = 1;
    i += j += k;
    printf("(b) %d %d %d\n", i, j, k);

    i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("(c) %d %d %d\n", i, j, k);

    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("(d) %d %d %d\n", i , j, k);
}

/* A:
 *
 * (a) 63 8 because addition operator has higher precedence than equality operator.
 * (b) 3 2 1 because assignment operator is right associative.
 * (c) 2 -1 3 because assignment operator is right associative.
 * (d) 0 0 0 because assignment operator is right associative.
 */