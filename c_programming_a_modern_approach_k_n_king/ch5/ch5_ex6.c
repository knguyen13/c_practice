/* C practice
 * Kevin Nguyen
 * 09/03/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 5 Exercises
 */
 
/* Q: Ch5, Ex6
 *
 * Is the following if statement legal? If so, what does it do when n is equal to 5?
 */

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 1-10)
        printf("n is between 1 and 10\n");
}

/* A:
 *
 * Yes but the result is again not what is expected.
 * This if statement will only result to true if n = -9;
 */