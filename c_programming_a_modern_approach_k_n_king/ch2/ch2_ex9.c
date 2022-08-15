/* C practice
 * Kevin Nguyen
 * 08/14/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 2 Exercises
 */

/* Q: Chapter 2, Exercise 9
 * Insert spaces between the tokens in Exercise 8 to make the statement easier to read.
 */

#include <stdio.h>

int main()
{
    int q = 1, p = 3;
    int answer = (3 * q - p * p) / 3;
    printf("Althought white space does not matter, it is a good idea to stick to the same style for readability.\n");
    printf("Check answer: %d", answer);
    return 0;
}