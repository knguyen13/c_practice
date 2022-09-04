/* C practice
 * Kevin Nguyen
 * 09/03/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 5 Exercises
 */
 
/* Q: Ch5, Ex9
 *
 * Are the following if statements equivalent? If not, why not?
 * (1)
 * if (score >= 90)
 *  printf("A");
 * else if (score >= 80)
 *  printf("B");
 * else if (score >= 70)
 *  printf("C");
 * else if (score >= 60)
 *  printf("D");
 * else
 *  printf("F");
 * 
 * (2)
 * if (score < 60)
 *  printf("F");
 * else if (score < 70)
 *  printf("D");
 * else if (score < 80)
 *  printf("C");
 * else if (score < 90)
 *  printf("B");
 * else
 *  printf("A");
 */

#include <stdio.h>

int main(void)
{  
    int score;
    printf("\nEnter the score(0-100): ");
    scanf("%d", &score);
    if (score >= 90)
        printf("A");
    else if (score >= 80)
        printf("B");
    else if (score >= 70)
        printf("C");
    else if (score >= 60)
        printf("D");
    else
        printf("F");

    if (score < 60)
        printf("F");
    else if (score < 70)
        printf("D");
    else if (score < 80)
        printf("C");
    else if (score < 90)
        printf("B");
    else
        printf("A");
}


/* A:
 *
 * Yes the two if statements will produce the same results.
 * (1) checks the score with the letter grade from the top down.
 * (2) checks the score with the letter grade from the bottom up.
 */