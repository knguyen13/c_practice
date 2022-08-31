/* C practice
 * Kevin Nguyen
 * 08/30/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 4 Exercises
 */

/* Q: Ch4, Ex11
 *
 * Show the output produced by each of the following program fragments.
 * Assume that i, j, and k are int variables.
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 1;
    printf("(a) %d ", i++ - 1);
    printf("%d\n", i);

    i = 10; j = 5;
    printf("(b) %d ", i++ - ++j);
    printf("%d %d\n", i, j);

    i = 7; j = 8;
    printf("(c) %d ", i++ - --j);
    printf("%d %d\n", i, j);

    i = 3; j = 4; k = 5;
    printf("(d) %d ", i++ - j++ + --k);
    printf("%d %d %d\n", i, j, k);
}

/* A:
 *
 * (a) 0 2 because post increment updates i after the current expression is evaluated.
 * (b) 4 11 6 because i is incremented after and j is incremented before the expression is evaluated.
 * (c) 0 8 7 same reason as (b), i is post incremented, j is pre decremented.
 * (d) 3 4 5 4 because i is post incremented, j is post incremented, and k is pre decremented.
 */