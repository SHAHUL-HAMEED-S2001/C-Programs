// to Find the Sum of First 50 Natural Numbers using For Loop

#include <stdio.h>
 
void main()
{
    int  num, sum = 0;
 
    for (num = 1; num <= 50; num++)
    {
        sum = sum + num;
    }
    printf("Sum = %4d\n", sum);
}