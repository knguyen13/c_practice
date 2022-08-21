/* C practice
 * Kevin Nguyen
 * 08/20/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 2 Projects
 */
 
/* Q: Ch. 2 Pr. 4
 *
 * Write a program that asks the user to enter a dollars-and-cents amount, then displays
 * the amount with 5% tax added.
 */

#include <stdio.h>

int main(void)
{
    float total;
    printf("Enter a dollar-and-cents amount.\n");
    scanf("%f", &total);
    total *= 1.05f;
    printf("The total amount with tax added is $%.2f", total);
}