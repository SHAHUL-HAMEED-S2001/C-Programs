// accept two integers and check if they are equal without using comparison operator

#include<stdio.h>

void main(void){

    int m, n;
    printf("Enter the values for M and N\n");
    scanf("%d %d", &m, &n);

    if(m-n)
        printf("\n%d and %d are not equal",m,n);
    else
        printf("\n%d and %d are equal",m,n);
}