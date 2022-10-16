// swap Two Numbers using Naive Approach 
 
#include <stdio.h>

void swap(float *ptr1, float *ptr2)
{
    
    float temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
 
int main(void) // main function not take any parameters
{
    float m, n;
    
    printf("Enter the value of M (accepted decimal values): ");
    scanf("%f", &m);
    printf("Enter the value of N (accepted decimal values): ");
    scanf("%f", &n);
    
    printf("Before swapping : M = %5.2f\tN = %5.2f\n", m, n); //%5.2f = 5 space with two precision of float value
    
    swap(&m, &n);
    
    printf("After swapping : M  = %5.2f\tN = %5.2f\n", m, n);

    return 0;
}