#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a;
    printf("Enter any number : ");
    scanf("%d",&n);

    a=n/2;

    if(n==2*a)
        printf("Even");
    else
        printf("Odd");

    return 0;
}
