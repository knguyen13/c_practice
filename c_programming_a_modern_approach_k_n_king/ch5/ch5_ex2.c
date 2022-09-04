/* C practice
 * Kevin Nguyen
 * 09/03/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 5 Exercises
 */
 
/* Q: Ch5, Ex2
 *
 * The following program fragments illustrate the logical operators.
 * Show the output produced by each, assuming that i, j, and k are int variables.
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;
    
    i = 10; j = 5;
    printf("(a) %d\n", !i < j);

    i = 2; j = 1;
    printf("(b) %d\n", !!i + !j);

    i = 5; j = 0; k = -5;
    printf("(c) %d\n", i && j || k);

    i = 1; j = 2; k = 3;
    printf("(d) %d\n", i < j || k);

}

/* A:
 *
 * (a) 1
 * (b) 1
 * (c) 1
 * (d) 1 
 * 
 * Notes: ! operator returns 0 for nonzero operand and returns 1 for 0 operand.
*/