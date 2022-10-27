// Using a Macro that defines Main

#include <stdio.h>
 
#define pseudo main

int pseudo(void)
{
    printf("Hello World\n");
    return 0;
}