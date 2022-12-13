// swap Two Numbers without using any Temporary Variable

#include <stdio.h>

void swap(float *ptr1, float *ptr2)
{
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}
 
int main(void)
{
    float m, n;
    printf("Enter the value of M (accepted decimal values): ");
    scanf("%f", &m);
    printf("Enter the value of N (accepted decimal values): ");
    scanf("%f", &n);
    printf("Before swapping : \t M = %5.2f\tN = %5.2f\n", m, n);
    swap(&m, &n);
    printf("After swapping : \t M  = %5.2f\tN = %5.2f\n", m, n);
}