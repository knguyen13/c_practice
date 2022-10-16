/* C practice
 * Kevin Nguyen
 * 10/16/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 5 Projects 
 */
 
/* Q: Ch. 5 Pr. 3
 * 
 * Modify the broker.c program of Section 5.2 by making both of the following changes:
 * (a) Ask the user to enter the number of shares and the price per share,
 * instead of the value of the trade.
 * 
 * (b) Add statements that compute the commision charged by a rival broker ($33 plus 3c per
 * share for fewer than 2000 shares; $33 plus 2c per share for 2000 shares or more). Dis-
 * play the rival's commission as well as the commission charged by the original broker.)
 */

#include <stdio.h>

int main(void)
{
    float commission, value, price_per_share;
    int num_of_shares;

    printf("Enter the number of shares: ");
    scanf("%d", &num_of_shares);
    printf("Enter the price per share: ");
    scanf("%f", &price_per_share);

    value = num_of_shares * price_per_share;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;
    
    printf("Commission of original broker: $%.2f\n", commission);

    /* Rival broker */
    if (num_of_shares < 2000)
    {
        commission = 33.00f + .03f * num_of_shares;
    }
    else
    {
        commission = 33.00f + .02f * num_of_shares;
    }

    printf("Commission of rival broker: $%.2f\n", commission);

    return 0;
}