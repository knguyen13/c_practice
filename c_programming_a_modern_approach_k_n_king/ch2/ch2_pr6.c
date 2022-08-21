/* C practice
 * Kevin Nguyen
 * 08/21/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 2 Projects
 */
 
/* Q: Ch. 2 Pr. 6
 *
 * Modify the program in project 6 to evaluate the polynomial using Horner's Rule.
 */

#include <stdio.h>

int main(void)
{
    int x, sol;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    sol = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d", sol);
}