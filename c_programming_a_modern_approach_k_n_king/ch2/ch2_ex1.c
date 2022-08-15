/* C practice
 * Kevin Nguyen
 * 08/14/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 2 Exercises
 */
 
/* Q: Chapter 2, Exercise 1
 *
 * Create and run Kernighan and Ritchie's famouse "hello,world" program.
 * Do you get a warning message from the compiler? If so, what's needed to make it go away?
 */

#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}

/* A: Chapter 2, Exercise 1
 *
 * No warning messages on my compiler; if there is a warning, it is complaining about no return type;
 * in which case a "return 0;"" statement would resolve the issue.
 */

