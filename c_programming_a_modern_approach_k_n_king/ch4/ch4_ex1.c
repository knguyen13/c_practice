/* C practice
 * Kevin Nguyen
 * 08/30/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 4 Exercises
 */
 
/* Q: Ch4, Ex1
 *
 * Show the output produced by each of the following program fragments.
 * Assume that i, j, and k are int varaibles.
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 5; j = 3;
    printf("(a) %d %d\n", i / j, i % j);

    i = 2; j = 3;
    printf("(b) %d\n", (i + 10) % j);

    i = 7; j = 8; k = 9;
    printf("(c) %d\n", (i + 10) % k/j);

}

/* A:
 *
 * (a) 1 2 because integer divided by integer results in integer.
 * (b) 0 because parenthesis have highest precedence so i + 10 is evaluated first
 *     then modulus after.
 * (c) 1 because paranethesis have highest precedence so i + 10 is evaluated first
 *     then modulus and division operators have equal precedence with left
 *     associativity so modulus is evaluated next then lastly division.
*/