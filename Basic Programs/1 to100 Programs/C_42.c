// Sum of First N Natural Numbers using Do While Loop

#include <stdio.h>
 
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int sum=0,i=1;
    do
    {
        sum += i++;
    }
    while(i<=n);
    printf("sum of first %d numbers is: %d",n,sum);
    return 0;
}