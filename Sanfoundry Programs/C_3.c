/*
 * C Program to check whether a number is even or odd using bitwise operator
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