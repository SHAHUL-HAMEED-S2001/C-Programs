/*
 * swap Two Numbers in C without using Temporary Variables or Arithmetic Operator
 */

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
https://homepages.inf.ed.ac.uk/rbf/HIPR2/figs/ttabxor.gif