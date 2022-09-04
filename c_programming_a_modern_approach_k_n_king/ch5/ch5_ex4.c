/* C practice
 * Kevin Nguyen
 * 09/03/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 5 Exercises
 */
 
/* Q: Ch5, Ex4
 *
 * Write a single expression whose value is either -1,0, or +1, depending on whether i is less
 * than, equal to, or greater than j, respectively.
 */

#include <stdio.h>

int main(void)
{
    int i, j;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &i, &j);
    printf("%d", (i > j) - (i < j));
}

/* A:
 *
 * (i > j) - (i < j)
 * 
 * For this expression, only one of the terms can be true at the same time.
 * If i and j are equal, both terms would fail and result in 0. If i > j first
 * term will result in a 1. If i < j, second term will result in a 1 which
 * evaluates the expression to -1.
 */