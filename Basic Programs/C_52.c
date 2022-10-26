// Reverse a Number in C using Recursion

#include <stdio.h>
 
int reverse(int n, int rev)
{
    if (n == 0)
        return rev;
    rev = rev * 10 + n % 10;
    return reverse(n / 10, rev);
}
 
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reversed number is %d", reverse(n, 0));
    return 0;
}