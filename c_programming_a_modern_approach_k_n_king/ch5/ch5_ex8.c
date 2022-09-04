/* C practice
 * Kevin Nguyen
 * 09/03/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 5 Exercises
 */
 
/* Q: Ch5, Ex8
 *
 * The following if statement is unnecessarily complicated. Simplify it as much
 * as possible. 
 *  if (age >= 13)
        if (age <= 19)
            teenager = true;
        else
            teenager = false;
    else if (age < 13)
        teenager = false;
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age, teenager;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 13 && age <= 19)
        teenager = true;
    else
        teenager = false;
    printf("You are %sa teenager.", teenager ? "" : "not ");
}