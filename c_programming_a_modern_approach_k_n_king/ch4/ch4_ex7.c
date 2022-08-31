/* C practice
 * Kevin Nguyen
 * 08/30/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 4 Exercises
 */

/* Q: Ch4, Ex7
 *
 * The algorithm for computing the UPC check digit ends with the following steps:
 * Subtract 1 from the total.
 * Compute the remainder when the adjusted total is divided by 10.
 * Subtract the remainder from 9
 * 
 * It's tempting to try to simplify the algorithm by using these steps instead:
 * Compute the remainder when the total is divided by 10.
 * Subtract the remainder from 10.
 * Why doesn't this technique work?
 */

/* A:
 *
 * original = 9 - ((total - 1) % 10)
 * modified = 10 - (total % 10)
 * 
 * Those two expressions are only equivalent when total is not divisible by 10.
 * If total is divisible by 10. Then original would produce 0 while modified would
 * produce 10.
 */