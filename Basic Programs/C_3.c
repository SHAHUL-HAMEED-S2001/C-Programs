// check Even or Odd using Bitwise Operator

#include <stdio.h>

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
 
    if(n & 1 == 1)
        printf("%d is odd.", n);
    else
        printf("%d is even.", n);
}

/*
 5 = 0101       6 = 0110
 1 = 0001       1 = 0001
 & = 0001       & = 0000
*/ 