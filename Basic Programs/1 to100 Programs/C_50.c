// Reverse a Number in C using For Loop

#include <stdio.h>
#include <math.h>
 
long reverse(long num)
{
    long reverse = 0;
    long temp;
    long remainder;
    long size = log10(num);
    for (int i = 0; i <= size; i++)
    {
        temp = num;
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    return reverse;
}
 
int main(void)
{
    long num;
    printf("Enter the number:\n");
    scanf("%ld", &num);
    printf("The reverse of the number is %ld\n", reverse(num));
    return 0;
}