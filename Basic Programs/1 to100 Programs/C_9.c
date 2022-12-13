// largest of Three Numbers using Functyion 

#include <stdio.h>
 
int biggest(int x, int y)
{
    if (x > y)
        return x;
    return y;
}
 
int main(void)
{
    int a, b, c;
    printf("Enter three numbers: \na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("%d is the biggest of all three numbers.\n", biggest(biggest(a, b), c));
    return 0;
}