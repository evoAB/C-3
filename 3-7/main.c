#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;
    printf("Enter a, b and c of equation ax^2+bx+c : ");
    scanf("%d%d%d",&a,&b,&c);
    x=b*b-4*a*c;

    if(x>0)
        printf("Real and Distinct");
    else
        if(x==0)
            printf("Real and Equal");
        else
            printf("Imaginary Roots");
    return 0;
}
