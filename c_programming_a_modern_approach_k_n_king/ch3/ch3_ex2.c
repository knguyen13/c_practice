/* C practice
 * Kevin Nguyen
 * 08/22/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 3 Exercises
 */
 
/* Q: Ch3, Ex2
 *
 * Write calls of printf that display a float variable x in the following formats.
 * (a) Exponential notation; left justified in a field of size 8; one digit after the decimal point.
 * (b) Exponential notation; right justified in a field of size 10; six digits after the decimal point.
 * (c) Fixed decimal notation; left-justified in a field of size 8, three digits after the decimal point.
 * (d) Fixed decimal notation; right-justified in a field of size 6; no digits after t he decimal point.
 */

#include <stdio.h>

int main(void)
{
    float x = 1234.1234;

    printf("%-8.1e\n", x);    /* (a) */
    printf("%10.6e\n", x);    /* (b) */
    printf("%-8.3f\n", x);    /* (c) */
    printf("%6.0f\n", x);     /* (d) */

    return 0;
}