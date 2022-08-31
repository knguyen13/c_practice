/* C practice
 * Kevin Nguyen
 * 08/30/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 4 Exercises
 */
 
/* Q: Ch4, Ex3
 *
 * What is the value of each of the following expressions in C89?
 * (Give all possible values if an expression may have more than one value.)
 * (a) 8 / 5
 * (b) -8 / 5
 * (c) 8 / -5
 * (d) -8 / -5
 */

/* A:
 *
 * (a) 1
 * (b) -1, -2
 * (c) -1, -2
 * (d) 1, 2
 * 
 * The C89 standard states that for the division operator if any operand is negative
 * then the value can be rounded up or down.
 */