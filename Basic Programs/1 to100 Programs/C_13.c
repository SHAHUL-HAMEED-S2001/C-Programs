// swap Two Numbers without using Temporary Variables and Arithmetic Operator

#include <stdio.h>
 
void main()
{
    long i, k;
 
    printf("Enter two integers \n");
    scanf("%ld %ld", &i, &k);
    printf("\n Before swapping i= %ld and k = %ld", i, k);
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("\n After swapping i= %ld and k = %ld", i, k);
}

/*
    i   = 0101
    j   = 0001
    i^j = 0100 = i
    i^j = 0101 = j
    i^j = 0001 = i
*/