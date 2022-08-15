/* C practice
 * Kevin Nguyen
 * 08/14/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 2 Exercises
 */

/* Q: Chapter 2, Exercise 6
 * Why is it not a good idea for an identifier to contain more than one adjacent underscore
 * as in current__balance, for example)?
 */

#include <stdio.h>

int main(void) 
{
    int current__balance = 15000;
    printf("current__balance: %d", current__balance);
    return 0;
}

/* A:
 * current__balance is a perfectly legal identifier. Although it is ill-advised to do so
 * because it is hard to distinguish the separate characters, and may cause bugs due to
 * incorrect reference of the variable when used in the future;
 */