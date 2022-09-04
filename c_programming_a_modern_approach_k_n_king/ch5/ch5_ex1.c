/* C practice
 * Kevin Nguyen
 * 09/03/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 5 Exercises
 */
 
/* Q: Ch5, Ex1
 *
 * The following program fragments illustrate the relational and equality operators.
 * Show the output produced by each, assuming that i, j, and k are int variables.
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;
    
    i = 2; j = 3;
    k = i * j == 6;
    printf("(a) %d\n", k);

    i = 5; j = 10; k = 1;
    printf("(b) %d\n", k > i < j);

    i = 3; j = 2; k = 1;
    printf("(c) %d\n", i < j == j < k);

    i = 3; j = 4; k = 5;
    printf("(d) %d\n", i % j + i < k);

}

/* A:
 *
 * (a) 1 because multiplication has higher precedence than equality operator.
 * (b) 1 because relational operators have left to right associativity.
 * (c) 1 because == operator has lower precedence than relational.
 * (d) 0 because % has higher precedence than + which has higher precedence than <.
*/