/* C practice
 * Kevin Nguyen
 * 08/14/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 2 Exercises
 */

/* Q: Chapter 2, Exercise 3
 * Condense the dweight.c program by (1) replacing the assignements to height, length, and width with
 * initializers and (2) removing the weight variable, instead calculating (volume + 165) / 166 within
 * the last printf.
 */

#include <stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10, volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165)/ 166);

    return 0;
}