// Sum of First N Natural Numbers using Formula

#include <stdio.h>
 
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int sum= ((n)*(n+1))/2;
    printf("sum of first %d numbers is: %d",n,sum);
    return 0;
}