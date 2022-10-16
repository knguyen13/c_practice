/* C practice
 * Kevin Nguyen
 * 10/16/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 5 Projects 
 */
 
/* Q: Ch. 5 Pr. 1
 * 
 * Write a program that calculates how many digits a number contains:
 * Enter a number: 374
 * The number 374 has 3 digits
 * 
 * You may assume that the number has no more than four digits.
 */
#define ERR_INVALID_PARAM 1

#include <stdio.h>

int main(void)
{
    int num, digits;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 9)
    {
        digits = 1;
    }
    else if (num >= 10 && num <= 99)
    {
        digits = 2;
    }
    else if (num >= 100 && num <= 999)
    {
        digits = 3;
    }
    else if (num >= 1000 && num <= 9999)
    {
        digits = 4;
    }
    else
    {
        printf("Invalid number.");
        return ERR_INVALID_PARAM;
    }

    printf("The number %d has %d digits", num, digits);
}