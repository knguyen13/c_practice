/* C practice
 * Kevin Nguyen
 * 09/03/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 5 Exercises
 */
 
/* Q: Ch5, Ex3
 *
 * The following program fragments illustrate the logical operators.
 * Show the output produced by each, assuming that i, j, and k are int variables.
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;
    
    i = 3; j = 4; k =5;
    printf("(a) %d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);

    i = 7; j = 8; k = 9;
    printf("(b) %d ", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);

    i = 7; j = 8; k = 9;
    printf("(c) %d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);

    i = 1; j = 1; k = 1;
    printf("(d) %d ", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k);

}

/* A:
 *
 * (a) 1 3 4 5
 * (b) 0 7 8 9
 * (c) 1 8 8 9
 * (d) 1 2 1 1
 * 
 * Notes: Logical operators will execute left operand first and if that is enough
 * information to determine the result, than the right operator will not be executed.
 * 
 * Assignment operator returns the value of the assignment.
 */