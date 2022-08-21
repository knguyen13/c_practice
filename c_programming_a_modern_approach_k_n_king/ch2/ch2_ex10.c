/* C practice
 * Kevin Nguyen
 * 08/14/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 2 Exercises
 */

/* Q: Chapter 2, Exercise 10
 * 
 * In exercise 3, which spaces are essential?
 */

#include <stdio.h>
int main(void)
{
    int height=8,length=12,width=10,volume=height*length*width;

    printf("Dimensions:     %dx   %dx   %d   \n",length,width,height);
    printf("Volume        (cubic    inches): %d\n", volume);
    printf("Dimensional    weight    (pounds):   %d\n",(volume +165)/166);

    return 0;
}

/* A:
 *
 * The spaces in the string literals are essential. If the white spaces
 * are altered there, then that would change the program. The compiler
 * ignores white spaces between tokens, so removing spaces between
 * tokens would not change the behaviour of the program. A space between 
 * keywords and identifiers are also required to differentiate between the 
 * two tokens. 
 */