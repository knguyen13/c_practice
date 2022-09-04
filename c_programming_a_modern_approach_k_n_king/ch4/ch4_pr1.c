/* C practice
 * Kevin Nguyen
 * 09/03/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 3 Projects 
 */
 
/* Q: Ch. 4 Pr. 1
 * 
 * Write a program that asks the user to enter a two-digit number, then prints the number with
 * its digits reversed.
 */

#include <stdio.h>

int main(void)
{
    int num, tens, ones;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    ones = num % 10;
    tens = (num - ones) / 10;
    printf("The reversal is: %d%d", ones, tens);
}