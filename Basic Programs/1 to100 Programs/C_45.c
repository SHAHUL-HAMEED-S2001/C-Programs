// Sum of First N Natural Numbers using Function

#include <stdio.h>
 
int sum_n(int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
    s+=i;
    return s;
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("sum of first %d numbers is: %d",n,sum_n(n));
    return 0;
}