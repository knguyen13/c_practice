/* C practice
 * Kevin Nguyen
 * 08/28/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 3 Projects 
 */
 
/* Q: Ch. 3 Pr. 2
 * Write a program that formats product information entered by the user.
 */

#include <stdio.h>

int main(void)
{
    int item_num, month, day, year; 
    float unit_price;
    
    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%d/%d/%d\n", item_num, unit_price, month, day, year);

    return 0;
}