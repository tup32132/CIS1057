#include <stdio.h>

/* 2.2 exercises*/
int main ()
{
    int first;
    int second;
    int third;
    printf("Please provide three integers: \n");
    scanf("%d%d%d\n", &first, &second, &third);

    printf( "Are these correct?\n %d, %d, %d", first, second, third);

    return(0);
}