/* C practice
 * Kevin Nguyen
 * 09/03/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 5 Exercises
 */
 
/* Q: Ch5, Ex5
 *
 * Is the following if statement legal? If so, what does it do when n is equal to 0?
 */

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 1 <= 10)
        printf("n is between 1 and 10\n");
}

/* A:
 *
 * This if statement is legal but would not produce the expected results.
 * Relational operators only have 2 operands and are left associative so
 * n >= 1 will be evaluated first then the return value will be compared with
 * <= 10. The result will always be 0 or 1 which is always <= 10 so this if
 * statement will always evaluate to true.
 */