/* C practice
 * Kevin Nguyen
 * 08/30/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 4 Exercises
 */

/* Q: Ch4, Ex8
 *
 * Would hte upc.c program still work if the expression
 * 9 - ((total - 1) % 10) were replaced with (10 - (total % 10)) % 10?
 */

/* A:
 *
 * original = 9 - ((total - 1) % 10)
 * modified = (10 - (total % 10)) % 10
 * 
 * From the previous problem, the issue was if total was divisible by 10
 * which produces a result of 10. This new modified expression handles that
 * case so it should work. 
 */