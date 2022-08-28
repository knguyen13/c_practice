/* C practice
 * Kevin Nguyen
 * 08/28/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 3 Projects 
 */
 
/* Q: Ch. 3 Pr. 4
 * Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx
 * and then displays the number in the form xxx.xxx.xxxx
 */

#include <stdio.h>

int main(void)
{
    int area, pre, post;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d)%d-%d", &area, &pre, &post);
    printf("You entered %d.%d.%d", area, pre, post);
    return 0;
}