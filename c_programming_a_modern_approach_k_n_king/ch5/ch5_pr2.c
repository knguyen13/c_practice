/* C practice
 * Kevin Nguyen
 * 10/16/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 5 Projects 
 */
 
/* Q: Ch. 5 Pr. 2
 * 
 * Write a progam that asks the user for a 24-hour time, then displays the
 * time in a 12-hour form:
 * 
 * Enter a 24-hour time: 21:11
 * Equivalent 12-hour time: 9:11 PM
 */
#include <string.h>
#include <stdio.h>

int main(void)
{
    int t24_hour, t24_min, t12_hour, t12_min;
    char *am_pm;
    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &t24_hour, &t24_min);

    t12_min = t24_min;
    if (t24_hour > 12)
    {
        t12_hour = t24_hour - 12;
        strcpy(am_pm, "PM");
    }
    else
    {
        t12_hour = t24_hour;
        strcpy(am_pm, "AM");
    }
    printf("Equivalent 12-hour time: %d:%.2d %s", t12_hour, t12_min, am_pm);
}