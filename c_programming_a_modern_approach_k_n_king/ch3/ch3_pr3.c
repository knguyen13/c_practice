/* C practice
 * Kevin Nguyen
 * 08/28/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 3 Projects 
 */
 
/* Q: Ch. 3 Pr. 3
 * Write a program that breaks down an ISBN entered by the user.
 */

#include <stdio.h>

int main(void)
{
    int gsi, group, pub, item_no, check;
    printf("Enter ISBN:");
    scanf("%d-%d-%d-%d-%d", &gsi, &group, &pub, &item_no, &check);
    printf("GSI prefix: %d\n", gsi);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", pub);
    printf("Item number: %d\n", item_no);
    printf("Check digit: %d\n", check);

    return 0;
}