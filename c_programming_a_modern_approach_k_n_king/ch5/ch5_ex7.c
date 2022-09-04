/* C practice
 * Kevin Nguyen
 * 09/03/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 5 Exercises
 */
 
/* Q: Ch5, Ex7
 *
 * What does the following statement print if i has the value 17?
 * What does it print if i has the value -17?
 */

#include <stdio.h>

int main(void)
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("%d\n", i >= 0 ? i : -1);
}

/* A:
 *
 * Ternary/conditional operator evaluates the expression and returns the
 * second operand if the expression results true and returns the third
 * operand if the expression returns false.
 * 
 * This statement will return i if i is positive and will return -1 if
 * i is negative.
 */