// find the Number of Integers Divisible by 5 in given range and sum of numbers

#include <stdio.h>

void main()
{
    int i, num1, num2, count = 0, sum = 0;

    printf("Enter the value of begin and end \n");
    scanf("%d %d", &num1, &num2);
    /* Count the number and compute their sum*/
    printf("Integers divisible by 5 are \n");
    for (i = num1; i <= num2; i++)
    {
        if (i % 5 == 0)
        {
            printf("%3d", i); //use at least 3 spaces to display, padding as needed
            count++;
            sum = sum + i;
        }
    }
    printf("\nNumber of integers divisible by 5 between %d and %d = %d\n", num1, num2, count);
    printf("Sum of all integers that are divisible by 5 = %d\n", sum);
}
