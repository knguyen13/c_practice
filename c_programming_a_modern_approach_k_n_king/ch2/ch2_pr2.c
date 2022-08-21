/* C practice
 * Kevin Nguyen
 * 08/20/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 2 Projects
 */
 
/* Q: Ch. 2 Pr. 2
 *
 * Write a program that computes the volume of a sphere with a 10-meter radius,
 * using the formula v = 4/3*pi*r^3. Write the fraction of 4/3 as 4.0f/3.0f.
 * (Try writing it as 4/3. What happens?) Hint: C doesn't have an exponentiation operator
 * so you'll need to multiply r by itself twice to compute r^3
 */

#include <stdio.h>

int main(void)
{
    float volume, pi = 3.14f, r = 10.0f;
    volume = 4.0f/3.0f * pi * (r * r * r);
    printf("The volume of a sphere with a 10m radius is %f.", volume);
}