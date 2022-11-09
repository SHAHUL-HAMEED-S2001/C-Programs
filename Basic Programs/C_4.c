// find the sum of odd and even numbers from 1 to N

#include <stdio.h>
void main()
{
    int i, num, odd_sum = 0, even_sum = 0;
 
    printf("Enter the limit: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    printf("\nSum of all odd numbers  = %d", odd_sum);
    printf("\nSum of all even numbers = %d", even_sum);
}