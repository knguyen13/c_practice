/* C practice
 * Kevin Nguyen
 * 08/30/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 4 Exercises
 */

/* Q: Ch4, Ex14
 *
 * Supply parenthesis to show how a C compiler would intepret each of the following
 * expressions.
 * 
 * (a) a * b - c * d + e
 * (b) a / b % c / d
 * (c) - a - b + c - + d
 * (d) a * - b / c - d
 */

#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, question, answer_check;
    a = 5; b = 89; c = 3; d = 61; e = 23;

    question = a * b - c * d + e; answer_check = ((a * b) - (c * d)) + e;
    printf("(a) question = %d, answer_check = %d\n", question, answer_check);

    question = a / b % c / d; answer_check = ((a / b) % c) / d;
    printf("(b) question = %d, answer_check = %d\n", question, answer_check);

    question = - a - b + c - + d; answer_check = (((- a) - b) + c) - (+ d);
    printf("(c) question = %d, answer_check = %d\n", question, answer_check);

    question = a * - b / c - d; answer_check = ((a * (- b)) / c) - d;
    printf("(d) question = %d, answer_check = %d\n", question, answer_check);
}

/* A:
 *
 * (a) ((a * b) - (c * d)) + e
 * (b) ((a / b) % c) / d
 * (c) (((- a) - b) + c) - (+ d)
 * (d) ((a * (- b)) / c) - d
 * 
 * Note: First look at precedence, then associativity.
 * Difference between unary operator and binary can be tricky. Check if 
 * the operator is adjacent to one or two operands.
 */