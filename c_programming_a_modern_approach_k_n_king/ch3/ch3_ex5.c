/* C practice
 * Kevin Nguyen
 * 08/22/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 3 Exercises
 */
 
/* Q: Ch3, Ex5
 *
 * Suppose that we call scanf as follows:
 * scanf("%f%d%f", &x, &i, &y);
 * 
 * if the user enters:
 * 12.3 45.6 789
 * what will be the values of x, i, y?
 */

#include <stdio.h>

int main(void)
{
    int i;
    float x, y;

    scanf("%f%d%f", &x, &i, &y);
    printf("%f %d %f\n", x, i ,y);

    return 0;
}

/* A:
 *
 * Similar to the previous exercise, scanf will search for the conversion specifiers in the format string.
 * In this case, float integer float will be searched for. The first break point will be the space, which
 * saves 12.3 into x. Then the decimal is the next illegal digit for an integer so 45 will be saved into i
 * and the decimal will return to the buffer. Lastly, 0.6 will be saved into y.
 * x = 12.3; i=45; y=0.6;
 */