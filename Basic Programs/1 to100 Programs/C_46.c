// Sum of First N Natural Numbers using Arrays

#include <stdio.h>
 
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int arr[n];
 
    // Store n natural numbers in an array
    for(int i=0;i<n;i++)
    arr[i] = i +1 ;
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];
    printf("sum of first %d numbers is: %d",n,sum);
    return 0;
}