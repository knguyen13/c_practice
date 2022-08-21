/* C practice
 * Kevin Nguyen
 * 08/21/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 2 Projects
 */
 
/* Q: Ch. 2 Pr. 7
 *
 * Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
 * that amount using the smallest number of $20, $10, $5, and $1 bills.
 */

#include <stdio.h>

int main(void)
{
    int bill, twenties, tens, fives, ones;
    printf("Enter a U.S. dollar amount: ");
    scanf("%d", &bill);
    twenties = bill / 20;
    tens = (bill - 20 * twenties) / 10;
    fives = (bill - 20 * twenties - 10 * tens) / 5;
    ones = (bill - 20 * twenties - 10 * tens - 5 * fives);
    printf("%d bill can be paid off with %d $20's, %d $10's, %d $5's, and %d $1's.\n",
            bill, twenties, tens, fives, ones);
}