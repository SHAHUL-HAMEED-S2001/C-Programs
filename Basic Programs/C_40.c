// Sum of First N Natural Numbers in C using For Loop

#include <stdio.h>
 
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    sum += i;
    printf("sum of first %d numbers is: %d",n,sum);
    return 0;
}