/* C practice
 * Kevin Nguyen
 * 08/22/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 3 Exercises
 */
 
/* Q: Ch3, Ex1
 *
 * What output do the following calls of printf produce?
 */

#include <stdio.h>

int main()
{
    printf("%6d,%4d\n", 86, 1040);    /* (a) */
    printf("%12.5e\n", 30.253);       /* (b) */
    printf("%.4f\n", 83.162);         /* (c) */
    printf("%-6.2g\n", .0000009979);  /* (d) */

    return 0;
}

/* A:
 *
 * (a) first integer is right justified with 6 minimum field width. second integer is right justified with 4 minimum field width.
 * (b) exponential form with 12 minimum field width and 5 digit precision.
 * (c) floating point number using minimum field width to display the whole number and 4 digit precision.
 * (d) left justified, 6 minimum field width, 2 digit precision. either normal floating point or exponential form depending on size of value.
 */