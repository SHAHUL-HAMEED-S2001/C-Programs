/*
 * C Program to check whether a number is even or odd using ternary operator
 */
 
#include <stdio.h>
void main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
 
    (n % 2 == 0) ? printf("%d is even number.", n) : printf("%d is odd number.", n);
}