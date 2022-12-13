// Sum of Digits using While Loop (Naive Approach)

#include <stdio.h>
 
int main(void) //the function takes NO argument
{
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
 
    // Keep dividing until the number is not zero
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10; // integer type operand will give integer type output
    }
    printf("Sum of digits of the number is %d", sum);
    return 0;
}