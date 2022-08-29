/* C practice
 * Kevin Nguyen
 * 08/28/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 3 Projects 
 */
 
/* Q: Ch. 3 Pr. 5
 * 
 * Write a program that asks the user to enter the numbers 1 to 16 (in any order) and then
 * displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
 * and diagonals.
 */

#include <stdio.h>

int main(void)
{
    int first, second, third, fourth,
        fifth, sixth, seventh, eighth,
        ninth, tenth, eleventh, twelvth,
        thirteenth, fourteenth, fifteenth, sixteenth;
    int row_sum1, row_sum2, row_sum3, row_sum4, col_sum1, col_sum2, col_sum3, col_sum4, dia_sum1, dia_sum2;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
          &first, &second, &third, &fourth, &fifth, &sixth, &seventh, &eighth,
          &ninth, &tenth, &eleventh, &twelvth,
          &thirteenth, &fourteenth, &fifteenth, &sixteenth);
    
    row_sum1 = first + second + third + fourth;
    row_sum2 = fifth + sixth + seventh + eighth;
    row_sum3 = ninth + tenth + eleventh + twelvth;
    row_sum4 = thirteenth + fourteenth + fifteenth + sixteenth;
    col_sum1 = first + fifth +  ninth + thirteenth;
    col_sum2 = second + sixth + tenth + fourteenth;
    col_sum3 = thirteenth + fourteenth + fifteenth + sixteenth;
    col_sum4 = fourth + eighth + twelvth + sixteenth;
    dia_sum1 = first + sixth + eleventh + sixteenth;
    dia_sum2 = fourth + seventh + tenth + thirteenth;

    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n",
           first, second, third, fourth, fifth, sixth, seventh, eighth,
           ninth, tenth, eleventh, twelvth,
           thirteenth, fourteenth, fifteenth, sixteenth);

    printf("Row sums: %d %d %d %d\nColumn sums: %d %d %d %d\nDiagonal sums: %d %d\n",
            row_sum1, row_sum2, row_sum3, row_sum4, col_sum1, col_sum2, col_sum3, col_sum4, dia_sum1, dia_sum2);

    return 0;
}