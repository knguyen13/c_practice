/* C practice
 * Kevin Nguyen
 * 08/20/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 2 Projects
 */
 
/* Q: Ch. 2 Pr. 5
 *
 * Write a program t hat asks the user to enter a value for x and
 * then displays the value if the following polynomial:
 * 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 */

#include <stdio.h>

int main(void)
{
    int x, sol;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    sol = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - x*x + 7*x - 6;
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d", sol);
}