/* C practice
 * Kevin Nguyen
 * 09/03/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 4 Projects 
 */
 
/* Q: Ch. 4 Pr. 3
 * 
 * Rewrite the program in Project 2 so that it prints the reversal of a three-digit
 * number without using arithmetic to split the number into digits
 */

#include <stdio.h>

int main(void)
{
    int hundreds, tens, ones;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &hundreds, &tens, &ones);
    printf("The reversal is: %d%d%d", ones, tens, hundreds);
}