// sum of Digits using Recursive Approach

#include <stdio.h>
long sum_of_digits_recur(long n)
{
    if (n == 0)
        return 0;
    else
        return n % 10 + sum_of_digits_recur(n / 10);
}
 
int main(void)
{
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);
    printf("Sum of digits of the number is %ld", sum_of_digits_recur(n));
    return 0;
}