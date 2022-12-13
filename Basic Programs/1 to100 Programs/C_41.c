// Sum of First N Natural Numbers using While Loop

#include <stdio.h>
 
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int sum=0,i=1;
    while(i<=n)
    sum += i++;
    printf("sum of first %d numbers is: %d",n,sum);
    return 0;
}