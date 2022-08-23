/* C practice
 * Kevin Nguyen
 * 08/22/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 3 Exercises
 */
 
/* Q: Ch3, Ex1
 *
 * For each of the following pairs of scanf format strings, indicate whether or not the two
 * strings are equivalent. If they're not, show how they can be distinguished.
 */

#include <stdio.h>
int main(void)
{
    int x = 0, y = 0, z = 0;
    float a = 0.0, b = 0.0;

    scanf("%d", &x);
    printf("%d\n", x);
    scanf(" %d", &x);
    printf("%d\n", x);

    scanf("%d-%d-%d", &x, &y, &z);
    printf("%d %d %d\n", x, y, z);
    scanf("%d -%d -%d", &x, &y, &z);
    printf("%d %d %d\n", x, y, z);

    scanf("%f", &a);
    printf("%f\n", a);
    scanf("%f ", &a);
    printf("%f\n", a);

    scanf("%f,%f", &a, &b);
    printf("%f %f\n", a, b);
    scanf("%f, %f", &a, &b);
    printf("%f %f\n", a, b);
    
    return 0;
}

/* A:
 *
 * (a) identical
 * (b) not identical. first scanf will look for specific pattern with no spaces in between. second scanf allows spaces before each dash.
 * (c) not identical. second scanf will hang the program, waiting for the end of spaces.
 * (d) identical.
 */