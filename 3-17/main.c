#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter length of 3 sides of triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>=c || a+c>b || b+c>a)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}
