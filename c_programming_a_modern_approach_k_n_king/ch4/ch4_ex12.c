/* C practice
 * Kevin Nguyen
 * 08/30/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 4 Exercises
 */

/* Q: Ch4, Ex12
 *
 * Show the output produced by each of the following program fragments.
 * Assume that i, j, and k are int variables.
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    i = 5;
    j = ++i * 3 - 2;
    printf("(a) %d %d\n", i, j);

    i = 5;
    j = 3 - 2 * i++;
    printf("(b) %d %d\n", i, j);

    i = 7;
    j = 3 * i-- + 2;
    printf("(c) %d %d\n", i, j);

    i = 7;
    j = 3 + --i * 2;
    printf("(d) %d %d\n", i, j);
}

/* A:
 *
 * (a) 6 16 because i is pre incremented and multiplication operator has higher precedence than addition.
 * (b) 6 -7 because i is post incremented and mult operator is higher precedence than add
 * (c) 6 23 because i is post decremented and " "
 * (d) 6 15 because i is pre decremented and " "
 */