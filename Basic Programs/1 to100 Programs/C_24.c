// Print Multiplication Table using recursion

#include <stdio.h>

int multiplicationTable(int num, int i)
{
    if (i > 10)
    {
        return;
    }
    printf("%d x %d = %d\n", num, i, num * i);
    multiplicationTable(num, i + 1);
}

int main(void)
{
    int num;
    // Ask the user for a number and store it in a variable
    puts("Enter a number : "); // puts = used to write a line or string to the output( stdout ) stream
    scanf("%d", &num); 
    multiplicationTable(num, 1);
}