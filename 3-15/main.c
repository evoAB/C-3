#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(n==0)
        printf("Zero");
    else
        if(n>0)
            printf("Positive");
        else
            printf("Negative");

    return 0;
}
