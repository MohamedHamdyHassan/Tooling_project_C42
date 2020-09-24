#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SET_BIT(var,bit) (var|= (1<<bit))
#define CLR_BIT(var,bit) (var&= ~(1<<bit))
int main()
{
    char x=12;
    SET_BIT(x,2);
    printf("%d",x);

    return 0;
}


