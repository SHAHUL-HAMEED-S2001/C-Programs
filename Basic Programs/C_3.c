/*
 * check Even or Odd in C using Bitwise Operator
 */
 
#include <stdio.h>
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
 
    if(n & 1==1)
        printf("%d is odd.", n);
    else
        printf("%d is even.", n);
}