// takes a grade as input and displays its equivalent description

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    char remark[15];
    char grade;

    printf("Enter the grade \n");
    scanf("%c", &grade);
    /*  lower case letter to upper case */
    grade = toupper(grade);
    switch(grade)
    {
    case 'S':
        strcpy(remark, " SUPER");
        break;
    case 'A':
        strcpy(remark, " VERY GOOD");
        break;
    case 'B':
        strcpy(remark, " FAIR");
        break;
    case 'Y':
        strcpy(remark, " ABSENT");
        break;
    case 'F':
        strcpy(remark, " FAILS");
        break;
    default :
        strcpy(remark, "ERROR IN GRADE \n"); // copy one string to another
        break;
    }
    printf("RESULT  : %s\n", remark);
}