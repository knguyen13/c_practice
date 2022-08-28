/* C practice
 * Kevin Nguyen
 * 08/28/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 3 Projects 
 */
 
/* Q: Ch. 3 Pr. 1
 *
 * Write a program that accepts a date from the user in the form mm/dd/yyyy
 * and then displays it in the form of yyyymmdd: 
 */

#include <stdio.h>

int main(void)
{
    int month, day, year;
    printf("Enter a date (mm/dd/yyyy) ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %.4d%.2d%.2d", year, month, day); 
    /* note: precision for integers is the minimum digits to print,
     * this could also work by sizing the minimum field width and prepend with 0 ex: %04d%02d%02d;
     * but if there were negatives, then that would take up a field width whereas controlling
     * precision would not count the negative sign as a digit. */

    return 0;
}