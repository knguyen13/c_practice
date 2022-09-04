/* C practice
 * Kevin Nguyen
 * 09/03/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 4 Projects 
 */
 
/* Q: Ch. 4 Pr. 2
 * 
 * Extend the program in Project 1 to ahndle three-digit numbers
 */

#include <stdio.h>

int main(void)
{
    int num, hundreds, tens, ones;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    ones = num % 10;
    tens = (num % 100 - ones) / 10;
    hundreds = (num - ((tens * 10) + ones)) / 100;
    printf("The reversal is: %d%d%d", ones, tens, hundreds);
}