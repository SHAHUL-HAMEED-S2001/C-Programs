// Sum of N Natural Numbers in a Given Range

#include <stdio.h>
 
int main()
{
    int l,r;
    printf("Enter ends of interval to find sum:");
    scanf("%d %d",&l,&r);
    int sum=0;
    for(int i=l;i<=r;i++)
    sum +=i;
    printf("Sum is:  %d",sum);
    return 0;
}