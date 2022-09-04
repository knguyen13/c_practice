/* C practice
 * Kevin Nguyen
 * 09/03/2022
 *
 * C Programming: A Modern Approach - K.N. King
 * Chapter 5 Exercises
 */
 
/* Q: Ch5, Ex7
 *
 * Write a switch statement to display the major city for the area code.
 */

#include <stdio.h>

int main(void)
{  
    int area_code;
    printf("Enter the area code: ");
    scanf("%d", &area_code);
    switch(area_code)
    {
        case 229:
            printf("Albany");
            break;
        case 404:
        case 470:
        case 678:
        case 770:
            printf("Atlanta");
            break;
        case 478:
            printf("Macon");
            break;
        case 706:
        case 762:
            printf("Columbus");
            break;
        case 912:
            printf("Savannah");
            break;
        default:
            printf("Area code not recognized");
    }
}