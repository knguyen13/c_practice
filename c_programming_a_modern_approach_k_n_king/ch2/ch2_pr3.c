/* C practice
 * Kevin Nguyen
 * 08/20/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 2 Projects
 */
 
/* Q: Ch. 2 Pr. 3
 *
 * Modify the program in project 2 so that it prompts the user for the radius.
 */

#include <stdio.h>

int main(void)
{
    float volume, pi = 3.14f, r;
    printf("What is the radius of the sphere?\n");
    scanf("%f", &r);
    volume = 4.0f/3.0f * pi * (r * r * r);
    printf("The volume of a sphere with a 10m radius is %f.", volume);
}