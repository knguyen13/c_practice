/* C practice
 * Kevin Nguyen
 * 08/22/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 3 Exercises
 */
 
/* Q: Ch3, Ex4
 *
 * Suppose that we call scanf as follows:
 * scanf("%d%f%d", &i, &x, &j);
 * 
 * if the user enters:
 * 10.3 5 6
 * what will be the values of i, x, and j?
 */

#include <stdio.h>

int main(void)
{
    int i, j;
    float x;

    scanf("%d%f%d", &i, &x, &j);
    printf("%d %f %d\n", i, x ,j);

    return 0;
}

/* A:
 *
 * scanf will first search for the end of the first integer i; it will encounter the decimal point which cannot be
 * contained in an integer and will save 10 in i and return the decimal point to the buffer; then it will search
 * for the next conversion specifier, the floating point x. Reading the space after .3, scanf will determine space
 * cannot be part of a float so it saves 0.3 into x and discards the space. The final conversion specifier is an
 * integer, so scanf will begin looking for an integer. After reading the space after 5, scanf saves 5 into j and discards
 * the space once again.
 * 
 * i = 10; x = .3; j = 5;
 */