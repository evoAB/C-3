#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter any three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("First number is greater");
    else
        if(b>a && b>c)
            printf("Second number is greater");
        else
            printf("Third number is greater");

    return 0;
}
