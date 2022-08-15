/* C practice
 * Kevin Nguyen
 * 08/14/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 2 Exercises
 */

/* Q: Chapter 2, Exercise 2
 *
 * Consider the following program.
 * (a) identify the directives and statements in this program.
 * (b) What output does the program produce?
 */

#include <stdio.h>

int main(void)
{  
    printf("Parkinson's Law: \nWork expands so as to ");
    printf("fill the time\n");
    printf("available for its completion.\n");
    return 0;
}

/* A: Chapter 2, Exercise 2
 *
 * (a) The include directive on line 16 tells the preprocessor to include stdio library.
 * This allows the main function to call functions belonging in stdio. The statements 
 * are on lines 20 to 23. The print statement comes from the stdio library.
 * 
 * (b) The output would produce the text in seprated into three separate lines.
 */