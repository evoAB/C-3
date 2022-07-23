#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%7==0 || n%3==0)
            printf("It is divisible");
        else
            printf("It is not divisible");

    return 0;
}
