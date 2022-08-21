/* C practice
 * Kevin Nguyen
 * 08/14/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 2 Exercises
 */

/* Q: Chapter 2, Exercise 4
 *
 * Write a program that declares several int and float variables -- without initializing
 * them -- and then print their values. Is there any pattern to the values? (Usually there isn't)
 */

#include <stdio.h>

int main(void)
{
    int test1, test2, test3;
    float test4, test5;
    int test6, test7;
    printf("Printing uninitialized variables with data type int: %d, %d, %d\n", test1, test2, test3);
    printf("Printing uninitialized variables with data type float: %f, %f, %f\n", test4, test5);
    printf("More tests: %d %d\n", test6, test7);
    return 0;
}

/* A: 
 * Unitialized variables have garbage value(old values stored at that memory location from previous use and was never wiped).
 */