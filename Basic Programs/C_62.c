// to display function using Token Pasting operator

#include <stdio.h>
 
#define pseudo m##a##i##n
 
int pseudo(void)
{
    printf("Hello World\n");
    return 0;
}