/*
* swap Two Numbers in C using Naive Approach 
*/
 
#include <stdio.h>

void swap(float *ptr1, float *ptr2)
{
    
    float temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
 
int main(void)
{
    float m, n;
    
    printf("Enter the value of M (accepted decimal values): ");
    scanf("%f", &m);
    printf("Enter the value of N (accepted decimal values): ");
    scanf("%f", &n);
    
    printf("Before swapping : M = %5.2f\tN = %5.2f\n", m, n);
    
    swap(&m, &n);
    
    printf("After swapping : M  = %5.2f\tN = %5.2f\n", m, n);

    return 0;
}