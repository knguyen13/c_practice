/* C practice
 * Kevin Nguyen
 * 08/30/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 4 Exercises
 */

/* Q: Ch4, Ex10
 *
 * Show the output produced by each of the following program fragments.
 * Assume that i, j, and k are int variables.
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    i = 6;
    j = i += i;
    printf("(a) %d %d\n", i, j);

    i = 5;
    j = (i -= 2) + 1;
    printf("(b) %d %d\n", i, j);

    i = 7;
    j = 6 + (i = 2.5);
    printf("(c) %d %d\n", i, j);

    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("(d) %d %d\n", i , j);
}

/* A:
 *
 * (a) 12 12 because assignment operator has right associativity.
 * (b) 3 4 because parenthesis has highest precedence.
 * (c) 2 8 because i is an integer.
 * (d) 6 9 because parenthesis has highest precedence.
 */