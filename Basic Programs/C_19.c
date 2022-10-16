// find sum of digits of a number taken as a string

#include <stdio.h>
#include <string.h>
 
int sum(char *str) // *var = a method of clubbing multiple entities of similar type into a larger group.
{
    int sum = 0;
    size_t i; // size_t = unsigned integer type
    size_t l = strlen(str); // return length of string
    for (i = 0; i < l; i++) 
    {
        if (str[i] >= '0' && str[i] <= '9') // Function that returns true if str contains all the digits from 0 to 9
        {
            sum = sum + (str[i] - '0'); // str[i] - '0' = converts the character at position i to a numeric digit.
        }
    }
    return sum;
}
 
int main(void)
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    printf("The sum of digits of numbers in the string is: %d", sum(str));
    return 0;
}