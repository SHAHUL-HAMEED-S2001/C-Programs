// check Even or Odd in C using Ternary Operator

#include <stdio.h>
void main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
 
    (n % 2 == 0) ? printf("%d is even number.", n) : printf("%d is odd number.", n);
}