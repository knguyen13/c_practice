/* C practice
 * Kevin Nguyen
 * 09/03/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 5 Exercises
 */
 
/* Q: Ch5, Ex10
 *
 * What output does the following program produce?
 */

#include <stdio.h>

int main(void)
{  
    int i = 1;
    switch (i % 3) {
        case 0: printf("zero");
        case 1: printf("one");
        case 2: printf("two");
    }
}


/* A:
 *
 * The switch case does not contain break statements so
 * the output would display everything following the
 * selected case.
 */