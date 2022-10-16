// swap Two Numbers in C using Bitwise XOR

#include <stdio.h>
 
void swap(long *ptr1, long *ptr2)
{
    *ptr1 = *ptr1 ^ *ptr2;
    *ptr2 = *ptr1 ^ *ptr2;
    *ptr1 = *ptr1 ^ *ptr2;
}
 
int main(void)
{
    long m, n;
    printf("Enter the value of M (accepted decimal values): ");
    scanf("%ld", &m);
    printf("Enter the value of N (accepted decimal values): ");
    scanf("%ld", &n);
    printf("Before swapping : M = %5ld\tN = %5ld\n", m, n); // %ld = long decimal
    swap(&m, &n);
    printf("After swapping : M  = %5ld\tN = %5ld\n", m, n);
}