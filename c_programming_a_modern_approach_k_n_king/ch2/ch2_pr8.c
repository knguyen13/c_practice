/* C practice
 * Kevin Nguyen
 * 08/21/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 2 Projects
 */
 
/* Q: Ch. 2 Pr. 8
 *
 * Write a program that calculates the remaining balance on a loan after the first, second, and
 * third monthly payments
 */

#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment, balance;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    interest_rate = (interest_rate/100/12);
    loan = (loan - monthly_payment) + loan * interest_rate;
    printf("Balance remaining after first payment: %.2f\n", loan);
    loan = (loan - monthly_payment) + loan * interest_rate;
    printf("Balance remaining after second payment: %.2f\n",loan);
    loan = (loan - monthly_payment) + loan * interest_rate;
    printf("Balance remaining after third payment: %.2f\n", loan);

}