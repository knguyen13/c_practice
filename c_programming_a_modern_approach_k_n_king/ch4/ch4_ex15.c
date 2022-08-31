/* C practice
 * Kevin Nguyen
 * 08/30/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 4 Exercises
 */

/* Q: Ch4, Ex15
 *
 * Give the values of i and j after each of the following expression statements has
 * been executed. (Assume that i has the value 1 initially and j has the value 2.)
 * (a) i += j;
 * (b) i--;
 * (c) i * j / i;
 * (d) i % ++j;
 */

#include <stdio.h>

int main(void)
{
    int i = 1, j = 2;
    
    i += j;
    printf("(a) %d %d\n", i, j);

    i = 1; j = 2;
    i--;
    printf("(b) %d %d\n", i, j);

    i = 1; j = 2;
    i * j / i;
    printf("(c) %d %d\n", i, j);

    i = 1; j = 2;
    i % ++j;
    printf("(d) %d %d\n", i, j);
}

/* A:
 * 
 * (a) 3 2
 * (b) 0 2
 * (c) 1 2 remains the same because none of those operators have side effects.
 * (d) 1 3 only increment has (assignment) side effect.
 */